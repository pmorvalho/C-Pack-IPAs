
#include <stdio.h>

#define DENTRO 1
#define FORA 0

int main()
{
    int c, estado = FORA;

    while ((c = getchar()) != EOF) {
        if (c == '"' ){
            if (estado == FORA){
                estado = DENTRO;
                continue;
            } else {
                estado = FORA;
                putchar('\n');
            }
        }
        if (estado == DENTRO)
            putchar(c);
    }

    return 0;
}