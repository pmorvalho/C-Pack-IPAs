
#include <stdio.h>

int main() {
    int c, valor = 0, resultado = 0, operador = '+';

    while ((c = getchar()) != EOF && c != '\n') {
        if (c == ' ') continue;

        if (c == '+' || c == '-') {
            resultado = operador == '+' ? resultado + valor : resultado - valor;
            valor = 0;
            operador = c;
        } else
            valor = valor * 10 + (c - '0');
    }

    
    resultado = operador == '+' ? resultado + valor : resultado - valor;
    printf("%d\n", resultado);

    return 0;
}