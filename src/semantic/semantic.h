#ifndef SEMANTIC_H
#define SEMANTIC_H

#include "../parser/parser.h"

typedef struct VarEntry {
    char* name;
    char* type;
    struct VarEntry* next;
} VarEntry;

typedef struct SymbolTable {
    VarEntry* head;
} SymbolTable;

SymbolTable* create_symbol_table();
void add_variable(SymbolTable* table, const char* name, const char* type);
int check_variable(SymbolTable* table, const char* name);

#endif
