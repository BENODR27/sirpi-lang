#ifndef RUNTIME_H
#define RUNTIME_H

#include "../parser/parser.h"

typedef struct Variable {
    char* name;
    int value;
    struct Variable* next;
} Variable;

typedef struct Class {
    char* name;
    struct Variable* members;
    struct Class* next;
} Class;

typedef struct Function {
    char* name;
    ASTNode* body;
    struct Function* next;
} Function;

void run(ASTNode* root);

#endif
