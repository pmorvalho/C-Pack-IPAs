

#include <stdio.h>

int main() {
    int n, digito, contador = 0, soma = 0;
    if (scanf("%d", &n) != 1 || n < 0) return 0;
    if (n == 0) {
        printf("1\n0\n");
        return 0;
    }
    while (n > 0) {
        digito = n % 10;
        soma += digito;
        contador++;
        n = n / 10;
    }
    printf("%d\n", contador);
    printf("%d\n", soma);
    return 0;
}