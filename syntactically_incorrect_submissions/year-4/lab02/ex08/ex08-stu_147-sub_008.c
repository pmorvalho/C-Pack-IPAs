
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    if (N <= 0) {
        return 1;
    }

    float numero, soma = 0;

    for (int i = 0; i < N; i++) {
        scanf("%f", &numero);
        soma += numero;
    }

    float media = soma / N;

    printf("%.2f\n", media);

    return 0;
}