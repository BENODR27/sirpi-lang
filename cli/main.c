#include <stdio.h>
#include <stdlib.h>
#include "../lexer/lexer.h"
#include "../parser/parser.h"
#include "../runtime/runtime.h"

int main(int argc, char* argv[]) {
    if(argc < 2) {
        printf("Usage: ./sirpi <file.sirpi>\n");
        return 1;
    }

    FILE* f = fopen(argv[1], "r");
    if(!f) { perror("File error"); return 1; }
    fseek(f,0,SEEK_END);
    long size = ftell(f);
    fseek(f,0,SEEK_SET);
    char* buffer = malloc(size+1);
    fread(buffer,1,size,f);
    buffer[size]=0;
    fclose(f);

    int token_count;
    Token* tokens = lex(buffer,&token_count);
    ASTNode* root = parse(tokens, token_count);
    run(root);

    return 0;
}
