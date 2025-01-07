
#include <stdio.h>

int contarDivisores(int N) {
    int divisores = 0;
    for (int i = 1; i <= N; i++) {
        if (N % i == 0) {
            divisores++;
        }
    }
    return divisores;
}

int main() {
    int N;
    printf("Digite um inteiro positivo N: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("Por favor, digite um número positivo.\n");
        return 1;
    }

    int numDivisores = contarDivisores(N);
    printf("%d\n", numDivisores);

    return 0;
}
