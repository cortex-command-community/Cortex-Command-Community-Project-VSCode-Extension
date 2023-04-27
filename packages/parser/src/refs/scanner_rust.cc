#include <stdbool.h>
#include <stddef.h>
#include <wctype.h>

#include <tree_sitter/parser.h>

enum TokenType
{
    OCAML_COMMENT,
    COMMENT,
};

void *tree_sitter_ReasonLigo_external_scanner_create() { return NULL; }
void tree_sitter_ReasonLigo_external_scanner_destroy(void *p) {}
void tree_sitter_ReasonLigo_external_scanner_reset(void *p) {}
unsigned tree_sitter_ReasonLigo_external_scanner_serialize(void *p, char *buffer) { return 0; }
void tree_sitter_ReasonLigo_external_scanner_deserialize(void *p, const char *b, unsigned n) {}

bool tree_sitter_ReasonLigo_external_scanner_scan(
    void *payload,
    TSLexer *lexer,
    const bool *valid_symbols)
{
    while (iswspace(lexer->lookahead))
        lexer->advance(lexer, true);

    if (lexer->lookahead == '/')
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

    return false;
}