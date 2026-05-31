
#include <stdio.h>

#define FORA 0
#define DENTRO 1

int main() {
    int c;
    int estado = FORA;
    int imprimir = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n') {
            estado = FORA;
            imprimir = 0;
            putchar(c);
        } else {
            if (estado == FORA) {
                estado = DENTRO;
                if (c != '0') {
                    putchar(c);
                    imprimir = 1;
                } else {
                    imprimir = 0;
                }
            } else {
                if (c != '0' || imprimir) {
                    putchar(c);
                    imprimir = 1;
                }
            }
            if (estado == DENTRO && c == '0' && !imprimir) {
                putchar('0');
                imprimir = 1;
            }
        }
    }

    return 0;
}