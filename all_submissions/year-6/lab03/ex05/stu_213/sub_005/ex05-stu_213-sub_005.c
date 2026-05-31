

#include <stdio.h>

#define DENTRO 1
#define FORA 0
#define INICIO 2

int main() {
    int estado = FORA, c;

    while ((c = getchar()) != EOF)
    {
        if (estado == DENTRO && c == '\\')
            estado = INICIO;
        else if (estado == DENTRO && c != '"')
            putchar(c);
        else if (estado == INICIO)
        {
            putchar(c);
            estado = DENTRO;
        }
        else if (c == '"')
        {
        if (estado == DENTRO){
            estado = FORA;
            printf("\n");
        }
        else
            estado = DENTRO;
        }
    }
    return 0;   
}