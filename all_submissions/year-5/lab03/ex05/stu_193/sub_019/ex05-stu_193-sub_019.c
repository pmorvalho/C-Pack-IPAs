

#include <stdio.h>

#define FORA 0
#define DENTRO 1

int main() {
    int c, estado = FORA;
    while ((c = getchar()) != EOF) {
        if (c == '"' && estado == FORA)
            estado = DENTRO;
        else if ( c== '"' && estado == DENTRO)
            estado = FORA;
        if (c == ' ' && estado == FORA)
            printf("\n");
        if (estado == DENTRO && c != '"')
            putchar(c);
    }
    return 0;
}