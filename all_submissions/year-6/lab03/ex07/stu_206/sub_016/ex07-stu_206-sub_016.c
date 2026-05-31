

#include <stdio.h>

int main() {
    int c;
    long resultado = 0;
    long num_atual = 0;
    char operador = '+';
    while ((c = getchar()) != EOF) {
        if (c >= '0' && c <= '9') {
            num_atual = (num_atual * 10) + (c - '0');
        } 
        else if (c == '+' || c == '-' || c == '\n') {
            if (operador == '+') {
                resultado += num_atual;
            } else {
                resultado -= num_atual;
            }
            if (c == '\n') {
                break;
            }
            operador = c;
            num_atual = 0;
        }
    }
    printf("%ld\n", resultado);
    return 0;
}