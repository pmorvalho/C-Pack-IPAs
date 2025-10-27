

#include <stdio.h>

int main() {
    int n, analisado, soma = 0, contador = 0;

    scanf("%d", &n);
    while (n>0) {
        analisado = n % 10;
        soma = soma + analisado;
        n = n/10;
        contador++;
    }
    printf("%d\n%d\n", contador, soma);
}