
#include <stdio.h>

int main() {
    int N, digito, numero_digitos = 0, soma_digitos = 0;

    scanf("%d", &N);

    while (N > 0) {
        digito = N % 10;
        N = N / 10;

        numero_digitos ++;
        soma_digitos += digito;
    }

    printf("%d\n%d\n", numero_digitos, soma_digitos);
    return 0;
}