

#include <stdio.h>

#define FORA 0
#define DENTRO 1

int calcular_acumulado(int acumulado, int n, char op);

int main() {
    int n = 0, acumulado = -1, estado = FORA;
    char c, op;
    
    while ((c = getchar()) != '\n') {
        if (c >= '0' && c <= '9') {
            if (estado == FORA)
                estado = DENTRO;
            n = n * 10 + (c - '0'); 
        } else if (estado == DENTRO) {
            estado = FORA;
            acumulado = calcular_acumulado(acumulado, n, op);
            n = 0;
        } else {
            if (c == '+' || c == '-')
                op = c;
        }
    }

    
    acumulado = calcular_acumulado(acumulado, n, op);

    printf("%d\n", acumulado);
    return 0;
}

int calcular_acumulado(int acumulado, int n, char op) {
    if (acumulado >= 0)
        acumulado = op == '+' ? acumulado + n : acumulado - n;
    else
        acumulado = n;
    return acumulado;
}