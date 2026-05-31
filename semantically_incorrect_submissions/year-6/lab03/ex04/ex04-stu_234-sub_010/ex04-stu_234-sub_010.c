

#include <stdio.h>

#define FORA 0
#define DENTRO 1
#define INICIO 2

int main() {
    int c, estado = FORA;

    while ((c = getchar()) != EOF) {

        if (estado == DENTRO) {
            putchar(c);
            if (!(c >= '0' && c <= '9'))
                estado = FORA;
        }

        else if (estado == FORA) {
            if (c == '0')
                estado = INICIO;
            else {
                putchar(c);
                if (c >= '1' && c <= '9')
                    estado = DENTRO;
            }
        }

        else { 
            if (c >= '1' && c <= '9') {
                putchar(c);
                estado = DENTRO;
            }
            else if (c != '0') {
                estado = FORA;
                printf("0%c", c);
            }
        }
    }
    return 0;
}

