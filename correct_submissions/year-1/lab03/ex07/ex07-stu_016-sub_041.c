#include <stdio.h>

int main() {
    int c, eh_numero = 1, numero = 0, total = 0, eh_soma = 1;
    while((c = getchar()) != '\n') {

        if(c == ' ') {
            if(eh_numero) {
                if(eh_soma) total += numero;
                else total -= numero;
                numero = 0;
            }
            eh_numero = 0;
        } else if(c == '+' || c == '-') {
            if(c == '+') eh_soma = 1;
            else eh_soma = 0;
        } else if('0' <= c && c <= '9') {
            if(eh_numero) numero = numero * 10 + (c - '0');
            else numero = c - '0';
            eh_numero = 1;
        }
    }
    if(eh_soma) total += numero;
    else total -= numero;

    printf("%d\n", total);
    return 0;
}
