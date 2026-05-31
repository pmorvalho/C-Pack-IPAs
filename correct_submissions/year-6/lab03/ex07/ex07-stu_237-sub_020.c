
#include <stdio.h>

#define FORA 0
#define DENTRO 1

int main() {
    int c;
    int estado = FORA;
    int value = 0;
    int resultado;
    int op = '+';
    int primeiro = 1;

    while ((c = getchar()) != '\n') {
        if (estado == FORA) {
            if (c >= '0' && c <= '9') {
                estado = DENTRO;
                value = c - '0';
            }
            else if (c == '+' || c == '-') {
                op = c;
            }
        }
        else {
            if (c >= '0' && c <= '9') {
                value = value * 10 + c - '0';
            }
            if (c == ' ') {
                estado = FORA;
                if (primeiro) {
                    resultado = value;
                    primeiro = 0;
                }
                else if (op == '+') {
                    resultado += value;
                }
                else {
                    resultado -= value;
                }
            }
        }
    }

    if (primeiro) {
        resultado = value;
    }
    else {
        if (op == '+') {
            resultado += value;
        }
        else {
            resultado -= value;
        }
    }

    printf("%d\n", resultado);

    return 0;
}