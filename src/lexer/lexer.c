#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "lexer.h"

// Minimal lexer for Tamil keywords
const char* keywords[] = {"மாறி", "செயல்பாடு", "திரும்பு", "என்றால்", "இல்லைஆனால்", "முழக்கம்"};

int is_keyword(const char* word) {
    for(int i=0; i<6; i++) {
        if(strcmp(word, keywords[i])==0) return 1;
    }
    return 0;
}

Token* lex(const char* source, int* token_count) {
    Token* tokens = malloc(sizeof(Token)*1024);
    int count=0;
    int i=0;
    while(source[i]) {
        if(isspace(source[i])) { i++; continue; }
        if(isdigit(source[i])) {
            char buffer[32]; int j=0;
            while(isdigit(source[i])) buffer[j++] = source[i++];
            buffer[j]=0;
            tokens[count].type = TOKEN_NUMBER;
            tokens[count].value = strdup(buffer);
            count++;
        } else if(isalpha(source[i])) {
            char buffer[64]; int j=0;
            while(isalpha(source[i])) buffer[j++] = source[i++];
            buffer[j]=0;
            if(is_keyword(buffer)) tokens[count].type = TOKEN_KEYWORD;
            else tokens[count].type = TOKEN_IDENTIFIER;
            tokens[count].value = strdup(buffer);
            count++;
        } else {
            char op[2] = {source[i],0};
            tokens[count].type = TOKEN_OPERATOR;
            tokens[count].value = strdup(op);
            count++;
            i++;
        }
    }
    tokens[count].type = TOKEN_EOF;
    tokens[count].value = NULL;
    *token_count = count;
    return tokens;
}
