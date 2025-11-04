#ifndef LEXER_H
#define LEXER_H

typedef enum {
    TOKEN_EOF,
    TOKEN_NUMBER,
    TOKEN_IDENTIFIER,
    TOKEN_KEYWORD,
    TOKEN_OPERATOR,
    TOKEN_STRING
} TokenType;

typedef struct {
    TokenType type;
    char* value;
} Token;

Token* lex(const char* source, int* token_count);

#endif
