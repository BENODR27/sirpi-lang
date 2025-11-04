#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "runtime.h"
#include "../stdlib/stdlib.h"

// Minimal runtime for MVP
Variable* global_vars = NULL;
Function* functions = NULL;
Class* classes = NULL;

void add_variable(const char* name, int value) {
    Variable* var = malloc(sizeof(Variable));
    var->name = strdup(name);
    var->value = value;
    var->next = global_vars;
    global_vars = var;
}

Variable* get_variable(const char* name) {
    Variable* cur = global_vars;
    while(cur) {
        if(strcmp(cur->name,name)==0) return cur;
        cur=cur->next;
    }
    return NULL;
}

void run(ASTNode* root) {
    if(root==NULL) return;

    if(strcmp(root->type,"var_decl")==0) {
        add_variable(root->value, 0);
        printf("Declared variable: %s\n", root->value);
    }
    else if(strcmp(root->type,"func_decl")==0) {
        printf("Declared function: %s\n", root->value);
    }
    else if(strcmp(root->type,"class_decl")==0) {
        printf("Declared class: %s\n", root->value);
    }
}
