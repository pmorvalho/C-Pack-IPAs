
#include <stdio.h>

int main() {
    int N;
    printf("Digite a quantidade de números (N): ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("Por favor, insira um valor válido para N maior que zero.\n");
        return 1; 
    }

    float numero, soma = 0;

    printf("Digite os %d números reais:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%f", &numero);
        soma += numero;
    }

    float media = soma / N;

    printf("A média dos números é: %.2f\n", media);

    return 0; 
}