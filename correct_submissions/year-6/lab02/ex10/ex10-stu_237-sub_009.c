
#include <stdio.h>

int main() {
    int N;
    int contador = 0;
    int soma = 0;

    scanf("%d", &N);

    while(N != 0) {
        contador++;
        soma += N % 10;
        N = N / 10;
    }
    printf("%d\n%d\n", contador, soma);

    return 0;
}