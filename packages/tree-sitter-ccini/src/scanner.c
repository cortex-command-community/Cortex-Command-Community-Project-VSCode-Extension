#include <assert.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

#include "tree_sitter/array.h"
#include "tree_sitter/parser.h"

enum TokenType {
  NEWLINE,
  INDENT,
  DEDENT,
  BLOCK_COMMENT_CONTENT,
  COMMENT
};

typedef enum {
  SingleQuote = 1 << 0,
  DoubleQuote = 1 << 1,
  BackQuote = 1 << 2,
  Raw = 1 << 3,
  Format = 1 << 4,
  Triple = 1 << 5,
  Bytes = 1 << 6,
} Flags;

typedef struct {
  char flags;
} Delimiter;

static inline Delimiter new_delimiter() { return (Delimiter){0}; }

typedef struct {
  Array(uint16_t) indents;
  Array(Delimiter) delimiters;
} Scanner;

static inline void advance(TSLexer *lexer) { lexer->advance(lexer, false); }

static inline void skip(TSLexer *lexer) { lexer->advance(lexer, true); }

typedef enum {
  LeftForwardSlash,
  LeftAsterisk,
  Continuing,
} BlockCommentState;

typedef struct {
  BlockCommentState state;
  unsigned nestingDepth;
} BlockCommentProcessing;

static inline void process_left_forward_slash(BlockCommentProcessing *processing, char current) {
  if (current == '*') {
    fprintf(stderr, "Incrementing Nesting Depth\n");
    processing->nestingDepth += 1;
  }
  processing->state = Continuing;
};

static inline void process_left_asterisk(BlockCommentProcessing *processing, char current, TSLexer *lexer) {
  if (current == '*') {
    lexer->mark_end(lexer);
    processing->state = LeftAsterisk;
    return;
  }

  if (current == '/') {
    fprintf(stderr, "Decrementing Nesting Depth\n");
    processing->nestingDepth -= 1;
  }

  processing->state = Continuing;
}

static inline void process_continuing(BlockCommentProcessing *processing, char current) {
  switch (current) {
    case '/':
      processing->state = LeftForwardSlash;
      break;
    case '*':
      processing->state = LeftAsterisk;
      break;
  }
}

static inline void process_block_comment(TSLexer *lexer, const bool *valid_symbols) {
  char first = (char)lexer->lookahead;
  bool foundEol = false;

  BlockCommentProcessing processing = {Continuing, 1};

  // For the purposes of actually parsing rust code, this
  // is incorrect as it considers an unterminated block comment
  // to be an error. However, for the purposes of syntax highlighting
  // this should be considered successful as otherwise you are not able
  // to syntax highlight a block of code prior to closing the
  // block comment
  while (!lexer->eof(lexer) && processing.nestingDepth != 0) {
    first = (char)lexer->lookahead;
    if (first == '\n') {
      foundEol = true;
    }
    switch (processing.state) {
      case LeftForwardSlash:
        process_left_forward_slash(&processing, first);
        break;
      case LeftAsterisk:
        process_left_asterisk(&processing, first, lexer);
        break;
      case Continuing:
        lexer->mark_end(lexer);
        process_continuing(&processing, first);
        break;
      default:
        break;
    }

    advance(lexer);
    if (first == '/' && processing.nestingDepth != 0) {
      lexer->mark_end(lexer);
    }
  }

  return;
}

bool tree_sitter_ccini_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
  Scanner *scanner = (Scanner *)payload;

  bool error_recovery_mode = valid_symbols[INDENT];

  lexer->mark_end(lexer);

  if (valid_symbols[BLOCK_COMMENT_CONTENT]) {
    process_block_comment(lexer, valid_symbols);
    lexer->result_symbol = BLOCK_COMMENT_CONTENT;
    return true;
  }

  bool found_end_of_line = false;
  uint16_t indent_length = 0;
  int32_t first_comment_indent_length = -1;
  for (;;) {
    if (lexer->lookahead == '\n') {
      found_end_of_line = true;
      indent_length = 0;
      skip(lexer);
    } else if (lexer->lookahead == ' ') {
      indent_length++;
      skip(lexer);
    } else if (lexer->lookahead == '\r' || lexer->lookahead == '\f') {
      indent_length = 0;
      skip(lexer);
    } else if (lexer->lookahead == '\t') {
      indent_length += 8;
      skip(lexer);
    } else if (lexer->lookahead == '/' && (valid_symbols[INDENT] || valid_symbols[DEDENT] ||
                                           valid_symbols[NEWLINE])) {
      skip(lexer);
      if (!(lexer->lookahead == '/' || lexer->lookahead == '*')) {
        break;
      }

      if (first_comment_indent_length == -1) {
        first_comment_indent_length = (int32_t)indent_length;
      }

      if (lexer->lookahead == '/') {
        // If we haven't found an EOL yet,
        // then this is a comment after an expression:
        //   foo = bar # comment
        // Just return, since we don't want to generate an indent/dedent
        // token.
        if (!found_end_of_line) {
          return false;
        }

        while (lexer->lookahead && lexer->lookahead != '\n') {
          skip(lexer);
        }
        skip(lexer);
        indent_length = 0;

      } else if (lexer->lookahead == '*') {
        skip(lexer);
        break;
      }

    } else if (lexer->lookahead == '\\') {
      skip(lexer);
      if (lexer->lookahead == '\r') {
        skip(lexer);
      }
      if (lexer->lookahead == '\n' || lexer->eof(lexer)) {
        skip(lexer);
      } else {
        return false;
      }
    } else if (lexer->eof(lexer)) {
      indent_length = 0;
      found_end_of_line = true;
      break;
    } else {
      break;
    }
  }

  if (found_end_of_line) {
    if (scanner->indents.size > 0) {
      uint16_t current_indent_length = *array_back(&scanner->indents);

      if (valid_symbols[INDENT] && indent_length > current_indent_length) {
        array_push(&scanner->indents, indent_length);
        lexer->result_symbol = INDENT;
        return true;
      }

      if (valid_symbols[DEDENT] &&
          indent_length < current_indent_length &&

          // Wait to create a dedent token until we've consumed any
          // comments
          // whose indentation matches the current block.
          first_comment_indent_length < (int32_t)current_indent_length) {
        array_pop(&scanner->indents);
        lexer->result_symbol = DEDENT;
        return true;
      }
    }

    if (valid_symbols[NEWLINE] && !error_recovery_mode) {
      lexer->result_symbol = NEWLINE;
      return true;
    }
  }

  return false;
}

unsigned tree_sitter_ccini_external_scanner_serialize(void *payload, char *buffer) {
  Scanner *scanner = (Scanner *)payload;

  size_t size = 0;

  size_t delimiter_count = scanner->delimiters.size;
  if (delimiter_count > UINT8_MAX) {
    delimiter_count = UINT8_MAX;
  }
  buffer[size++] = (char)delimiter_count;

  if (delimiter_count > 0) {
    memcpy(&buffer[size], scanner->delimiters.contents, delimiter_count);
  }
  size += delimiter_count;

  uint32_t iter = 1;
  for (; iter < scanner->indents.size && size < TREE_SITTER_SERIALIZATION_BUFFER_SIZE; ++iter) {
    uint16_t indent_value = *array_get(&scanner->indents, iter);
    buffer[size++] = (char)(indent_value & 0xFF);
    buffer[size++] = (char)((indent_value >> 8) & 0xFF);
  }

  return size;
}

void tree_sitter_ccini_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
  Scanner *scanner = (Scanner *)payload;

  array_delete(&scanner->delimiters);
  array_delete(&scanner->indents);
  array_push(&scanner->indents, 0);

  if (length > 0) {
    size_t size = 0;

    size_t delimiter_count = (uint8_t)buffer[size++];
    if (delimiter_count > 0) {
      array_reserve(&scanner->delimiters, delimiter_count);
      scanner->delimiters.size = delimiter_count;
      memcpy(scanner->delimiters.contents, &buffer[size], delimiter_count);
      size += delimiter_count;
    }

    for (; size + 1 < length; size += 2) {
      uint16_t indent_value = (unsigned char)buffer[size] | ((unsigned char)buffer[size + 1] << 8);
      array_push(&scanner->indents, indent_value);
    }
  }
}

void *tree_sitter_ccini_external_scanner_create() {
#if defined(__STDC_VERSION__) && (__STDC_VERSION__ >= 201112L)
  _Static_assert(sizeof(Delimiter) == sizeof(char), "");
#else
  assert(sizeof(Delimiter) == sizeof(char));
#endif
  Scanner *scanner = calloc(1, sizeof(Scanner));
  array_init(&scanner->indents);
  array_init(&scanner->delimiters);
  tree_sitter_ccini_external_scanner_deserialize(scanner, NULL, 0);
  return scanner;
}

void tree_sitter_ccini_external_scanner_destroy(void *payload) {
  Scanner *scanner = (Scanner *)payload;
  array_delete(&scanner->indents);
  array_delete(&scanner->delimiters);
  free(scanner);
}