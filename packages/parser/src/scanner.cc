
#include

enum TokenType
{
  INDENT,
  DEDENT,
}

/*
Create
  This function should create your scanner object. It will only be called once anytime your language is set
  on a parser. Often, you will want to allocate memory on the heap and return a pointer to it. If your external
  scanner doesn’t need to maintain any state, it’s ok to return NULL. */
void *
tree_sitter_my_language_external_scanner_create()
{
  // ...
}

/*
Destroy
  This function should free any memory used by your scanner. It is called once when a parser is deleted or assigned
  a different language. It receives as an argument the same pointer that was returned from the create function. If
  your create function didn’t allocate any memory, this function can be a noop.
*/
void tree_sitter_my_language_external_scanner_destroy(void *payload)
{
  // ...
}
/*
Serialize
  This function should copy the complete state of your scanner into a given byte buffer,
  and return the number of bytes written. The function is called every time the external scanner successfully recognizes a token.
  It receives a pointer to your scanner and a pointer to a buffer. The maximum number of bytes that you can write is given
  by the TREE_SITTER_SERIALIZATION_BUFFER_SIZE constant, defined in the tree_sitter/parser.h header file.

  The data that this function writes will ultimately be stored in the syntax tree so that the scanner can be restored to the
  right state when handling edits or ambiguities. For your parser to work correctly, the serialize function must store its
  entire state, and deserialize must restore the entire state. For good performance, you should design your scanner so that
  its state can be serialized as quickly and compactly as possible.
*/
unsigned tree_sitter_my_language_external_scanner_serialize(
    void *payload,
    char *buffer)
{
  // ...
}

/*
Deserialize
  This function should restore the state of your scanner based the bytes that were previously written by the serialize function.
  It is called with a pointer to your scanner, a pointer to the buffer of bytes, and the number of bytes that should be read.
  It is good practice to explicitly erase your scanner state variables at the start of this function,
  before restoring their values from the byte buffer.
*/
void tree_sitter_my_language_external_scanner_deserialize(
    void *payload,
    const char *buffer,
    unsigned length)
{
  // ...
}

bool tree_sitter_my_language_external_scanner_scan(
    void *payload,
    TSLexer *lexer,
    const bool *valid_symbols)
{
  // ...
}
