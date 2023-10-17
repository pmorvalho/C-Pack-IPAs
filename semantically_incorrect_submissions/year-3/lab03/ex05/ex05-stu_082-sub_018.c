

#include <stdio.h>

#define FORA 0
#define DENTRO 1

int main() {
    int c, estado = FORA;
    while ((c = getchar()) != EOF) {
        if (estado) { 
            if (c == '\"') {
                estado = FORA;
                putchar('\n');
            }
            else
                putchar(c);
        }
        else { 
            if (c == ' ' || c == '\n' || c == '\t') 
                estado = FORA;
            else if (c == '\"')
                estado = DENTRO;
            else {
                putchar(c);
                estado = DENTRO;
            }
        }
    }
    return 0;
}