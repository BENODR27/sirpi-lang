#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "parser.h"

// Minimal parser for MVP (supports var, func, class)
ASTNode* create_node(const char* type, const char* value) {
    ASTNode* node = malloc(sizeof(ASTNode));
    node->type = strdup(type);
    node->value = value ? strdup(value) : NULL;
    node->left = NULL;
    node->right = NULL;
    node->children = NULL;
    node->child_count = 0;
    return node;
}

ASTNode* parse(Token* tokens, int token_count) {
    // For MVP: parse only first token to demonstrate
    if(token_count == 0) return NULL;

    if(tokens[0].type == TOKEN_KEYWORD) {
        if(strcmp(tokens[0].value,"மாறி")==0) {
            ASTNode* var_node = create_node("var_decl", tokens[1].value);
            return var_node;
        }
        if(strcmp(tokens[0].value,"செயல்பாடு")==0) {
            ASTNode* func_node = create_node("func_decl", tokens[1].value);
            return func_node;
        }
        if(strcmp(tokens[0].value,"வகுப்பு")==0) {
            ASTNode* class_node = create_node("class_decl", tokens[1].value);
            return class_node;
        }
    }
    return NULL;
}
