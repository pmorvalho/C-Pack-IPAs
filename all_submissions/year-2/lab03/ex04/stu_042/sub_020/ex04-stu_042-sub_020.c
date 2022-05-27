#include <stdio.h>

#define FORA 0
#define DENTRO 1
#define DEL_ZERO 2

int main() {
    int c;
    int estado = FORA;

    while ((c = getchar()) != EOF) {
        if (estado == FORA) {
            if (c >= '1' && c <= '9')
                estado = DENTRO;
            if (c == '0')
                estado = DEL_ZERO;
        }

        if (estado == DEL_ZERO) {    
            while (c == '0')
                c = getchar();
            if (c >= '1' && c <= '9')
                estado = DENTRO;         
        }

        if (estado == DENTRO) {
            while (c >= '1' && c <= '9') {
                putchar(c);
                c = getchar();
            }
            if (c == ' ' || c == '\n') {
                estado = FORA;
                putchar(' ');
            }
        }
    }
    putchar('\n');
    return 0;
}