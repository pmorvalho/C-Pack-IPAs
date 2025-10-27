
#include <stdio.h>

int main() {
    int n, contador, soma, digito;
    scanf("%d", &n);
    contador = 0;
    soma = 0;
    while (n > 0) {
        digito = n % 10;
        n = n / 10;
        contador ++;
        soma = soma + digito;
    }
    printf("%d\n%d\n", contador, soma);
    return 0;
}