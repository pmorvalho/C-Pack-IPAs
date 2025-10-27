

#include <stdio.h>

int main() {
    int c, contador, soma;

    contador = soma = 0;
    while ((c = getchar()) != EOF) {
        soma += c - '0';
        contador++;
    }

    printf("%d\n%d\n", contador, soma);
    return 0;
}
