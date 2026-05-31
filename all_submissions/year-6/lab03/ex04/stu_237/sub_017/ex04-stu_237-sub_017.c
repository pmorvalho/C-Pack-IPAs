
#include <stdio.h>

#define FORA 0
#define DENTRO 1

int main() {
    int c;
    int estado = FORA;
    int vistoNaoZero = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n') {
            if (estado == DENTRO && !vistoNaoZero)
                putchar('0');

            estado = FORA;
            vistoNaoZero = 0;
            putchar(c);
        }
        else {
            if (estado == FORA) {
                estado = DENTRO;
                vistoNaoZero = 0;
            }

            if (c != '0') {
                vistoNaoZero = 1;
                putchar(c);
            }
            else if (vistoNaoZero) {
                putchar(c);
            }
        }
    }

    if (estado == DENTRO && !vistoNaoZero)
        putchar('0');

    return 0;
}