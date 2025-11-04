all:
    gcc -o sirpi cli/main.c lexer/lexer.c parser/parser.c runtime/runtime.c stdlib/stdlib.c -I.

clean:
    rm -f sirpi
