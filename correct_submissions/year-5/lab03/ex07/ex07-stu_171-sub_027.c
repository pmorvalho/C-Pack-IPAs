

#include <stdio.h>

int main() {
    int numero, resultado;
    char operador;
    scanf("%d", &resultado);

    while (scanf(" %c %d", &operador, &numero) == 2) {
        if (operador == '+') {
            resultado += numero;
        } else if (operador == '-') {
            resultado -= numero;
        }
    }

    printf("%d\n", resultado);
    return 0;
}
