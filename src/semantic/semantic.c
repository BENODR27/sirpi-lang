#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "semantic.h"

SymbolTable* create_symbol_table() {
    SymbolTable* table = malloc(sizeof(SymbolTable));
    table->head = NULL;
    return table;
}

void add_variable(SymbolTable* table, const char* name, const char* type) {
    VarEntry* entry = malloc(sizeof(VarEntry));
    entry->name = strdup(name);
    entry->type = strdup(type);
    entry->next = table->head;
    table->head = entry;
}

int check_variable(SymbolTable* table, const char* name) {
    VarEntry* current = table->head;
    while(current) {
        if(strcmp(current->name, name)==0) return 1;
        current = current->next;
    }
    return 0;
}
