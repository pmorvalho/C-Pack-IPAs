
#include <stdio.h>

int main() {
    int N;
    float numero, soma = 0;

    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        scanf("%f", &numero);
        soma += numero;
    }   

    float media = soma / N;

    printf("%.2f", media);
    return 0;
}
