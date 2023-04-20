#include <tree_sitter/parser.h>
#include <vector>
#include <cwctype>
#include <cstring>
#include <cassert>
#include <stdio.h>
namespace
{

  using std::iswspace;
  using std::memcpy;
  using std::vector;

  enum TokenType
  {
    NEWLINE,
    INDENT,
    DEDENT,
    COMMENT,
  };

  struct Delimiter
  {
    enum
    {
      SingleQuote = 1 << 0,
      DoubleQuote = 1 << 1,
      BackQuote = 1 << 2,
      Raw = 1 << 3,
      Format = 1 << 4,
      Triple = 1 << 5,
      Bytes = 1 << 6,
    };

    Delimiter() : flags(0) {}

    bool is_format() const
    {
      return flags & Format;
    }

    bool is_raw() const
    {
      return flags & Raw;
    }

    bool is_triple() const
    {
      return flags & Triple;
    }

    bool is_bytes() const
    {
      return flags & Bytes;
    }

    int32_t end_character() const
    {
      if (flags & SingleQuote)
        return '\'';
      if (flags & DoubleQuote)
        return '"';
      if (flags & BackQuote)
        return '`';
      return 0;
    }

    void set_format()
    {
      flags |= Format;
    }

    void set_raw()
    {
      flags |= Raw;
    }

    void set_triple()
    {
      flags |= Triple;
    }

    void set_bytes()
    {
      flags |= Bytes;
    }

    void set_end_character(int32_t character)
    {
      switch (character)
      {
      case '\'':
        flags |= SingleQuote;
        break;
      case '"':
        flags |= DoubleQuote;
        break;
      case '`':
        flags |= BackQuote;
        break;
      default:
        assert(false);
      }
    }

    char flags;
  };

  struct Scanner
  {
    Scanner()
    {
      assert(sizeof(Delimiter) == sizeof(char));
      deserialize(NULL, 0);
    }

    unsigned serialize(char *buffer)
    {
      size_t i = 0;

      size_t delimiter_count = delimiter_stack.size();
      if (delimiter_count > UINT8_MAX)
        delimiter_count = UINT8_MAX;
      buffer[i++] = delimiter_count;

      if (delimiter_count > 0)
      {
        memcpy(&buffer[i], delimiter_stack.data(), delimiter_count);
      }
      i += delimiter_count;

      vector<uint16_t>::iterator
          iter = indent_length_stack.begin() + 1,
          end = indent_length_stack.end();

      for (; iter != end && i < TREE_SITTER_SERIALIZATION_BUFFER_SIZE; ++iter)
      {
        buffer[i++] = *iter;
      }

      return i;
    }

    void deserialize(const char *buffer, unsigned length)
    {
      delimiter_stack.clear();
      indent_length_stack.clear();
      indent_length_stack.push_back(0);

      if (length > 0)
      {
        size_t i = 0;

        size_t delimiter_count = (uint8_t)buffer[i++];
        delimiter_stack.resize(delimiter_count);
        if (delimiter_count > 0)
        {
          memcpy(delimiter_stack.data(), &buffer[i], delimiter_count);
        }
        i += delimiter_count;

        for (; i < length; i++)
        {
          indent_length_stack.push_back(buffer[i]);
        }
      }
    }

    void advance(TSLexer *lexer)
    {
      lexer->advance(lexer, false);
    }

    void skip(TSLexer *lexer)
    {
      lexer->advance(lexer, true);
    }

    bool scan(TSLexer *lexer, const bool *valid_symbols)
    {
      bool error_recovery_mode = valid_symbols[STRING_CONTENT] && valid_symbols[INDENT];
      bool within_brackets = valid_symbols[CLOSE_BRACE] || valid_symbols[CLOSE_PAREN] || valid_symbols[CLOSE_BRACKET];

      lexer->mark_end(lexer);

      bool found_end_of_line = false;
      uint32_t indent_length = 0;
      int32_t first_comment_indent_length = -1;
      for (;;)
      {
        if (lexer->lookahead == '\n')
        {
          found_end_of_line = true;
          indent_length = 0;
          skip(lexer);
        }
        else if (lexer->lookahead == ' ')
        {
          indent_length++;
          skip(lexer);
        }
        else if (lexer->lookahead == '\r')
        {
          indent_length = 0;
          skip(lexer);
        }
        else if (lexer->lookahead == '\t')
        {
          indent_length += 8;
          skip(lexer);
        }
        // Comment handling
        else if (lexer->lookahead == '/')
        {
          lexer->advance(lexer, false);

          if (lexer->lookahead == '/')
          {
            lexer->advance(lexer, false);

            for (;;)
            {
              switch (lexer->lookahead)
              {
              case '\n':
                lexer->advance(lexer, false);
              case '\0':
                lexer->result_symbol = COMMENT;
                return true;
              default:
                lexer->advance(lexer, false);
                break;
              }
            }
          }
          else if (lexer->lookahead == '*')
          {
            lexer->advance(lexer, false);

            bool after_star = false;
            unsigned nesting_depth = 1;
            for (;;)
            {
              switch (lexer->lookahead)
              {
              case '\0':
                return false;
              case '*':
                lexer->advance(lexer, false);
                after_star = true;
                break;
              case '/':
                if (after_star)
                {
                  lexer->advance(lexer, false);
                  after_star = false;
                  nesting_depth--;
                  if (nesting_depth == 0)
                  {
                    lexer->result_symbol = OCAML_COMMENT;
                    return true;
                  }
                }
                else
                {
                  lexer->advance(lexer, false);
                  after_star = false;
                  if (lexer->lookahead == '*')
                  {
                    nesting_depth++;
                    lexer->advance(lexer, false);
                  }
                }
                break;
              default:
                lexer->advance(lexer, false);
                after_star = false;
                break;
              }
            }
          }
        }

        else if (lexer->lookahead == '#')
        {
          if (first_comment_indent_length == -1)
          {
            first_comment_indent_length = (int32_t)indent_length;
          }
          while (lexer->lookahead && lexer->lookahead != '\n')
          {
            skip(lexer);
          }
          skip(lexer);
          indent_length = 0;
        }
        else if (lexer->lookahead == '\\')
        {
          skip(lexer);
          if (lexer->lookahead == '\r')
          {
            skip(lexer);
          }
          if (lexer->lookahead == '\n')
          {
            skip(lexer);
          }
          else
          {
            return false;
          }
        }
        else if (lexer->lookahead == '\f')
        {
          indent_length = 0;
          skip(lexer);
        }
        else if (lexer->lookahead == 0)
        {
          indent_length = 0;
          found_end_of_line = true;
          break;
        }
        else
        {
          break;
        }
      }

      if (found_end_of_line)
      {
        if (!indent_length_stack.empty())
        {
          uint16_t current_indent_length = indent_length_stack.back();

          if (
              valid_symbols[INDENT] &&
              indent_length > current_indent_length)
          {
            indent_length_stack.push_back(indent_length);
            lexer->result_symbol = INDENT;
            return true;
          }

          if (
              (valid_symbols[DEDENT] || (!valid_symbols[NEWLINE] && !within_brackets)) &&
              indent_length < current_indent_length &&

              // Wait to create a dedent token until we've consumed any comments
              // whose indentation matches the current block.
              first_comment_indent_length < (int32_t)current_indent_length)
          {
            indent_length_stack.pop_back();
            lexer->result_symbol = DEDENT;
            return true;
          }
        }

        if (valid_symbols[NEWLINE] && !error_recovery_mode)
        {
          lexer->result_symbol = NEWLINE;
          return true;
        }
      }

      return false;
    }

    vector<uint16_t> indent_length_stack;
    vector<Delimiter> delimiter_stack;
  };

}

extern "C"
{

  void *tree_sitter_python_external_scanner_create()
  {
    return new Scanner();
  }

  bool tree_sitter_python_external_scanner_scan(void *payload, TSLexer *lexer,
                                                const bool *valid_symbols)
  {
    Scanner *scanner = static_cast<Scanner *>(payload);
    return scanner->scan(lexer, valid_symbols);
  }

  unsigned tree_sitter_python_external_scanner_serialize(void *payload, char *buffer)
  {
    Scanner *scanner = static_cast<Scanner *>(payload);
    return scanner->serialize(buffer);
  }

  void tree_sitter_python_external_scanner_deserialize(void *payload, const char *buffer, unsigned length)
  {
    Scanner *scanner = static_cast<Scanner *>(payload);
    scanner->deserialize(buffer, length);
  }

  void tree_sitter_python_external_scanner_destroy(void *payload)
  {
    Scanner *scanner = static_cast<Scanner *>(payload);
    delete scanner;
  }
}