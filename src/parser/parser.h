#ifndef PARSER_H
#define PARSER_H

#include "../lexer/lexer.h"

typedef struct ASTNode {
    char* type; // "var_decl", "func_decl", "class_decl", "binary_op", "call", "number", "identifier"
    char* value;
    struct ASTNode* left;
    struct ASTNode* right;
    struct ASTNode** children;
    int child_count;
} ASTNode;

ASTNode* parse(Token* tokens, int token_count);

#endif
