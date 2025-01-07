
#include <stdio.h>

int main() {
    int N, i = 1;
    float res, numero, acumulador = 0;

    printf("Digite a quantidade de números (N): ");
    scanf("%d", &N);

    while(i <= N){
        printf("Introduza o numero %d:\n:", i);
        scanf("%f", &numero);
        acumulador = acumulador + numero;
        i ++;
    }
    res = acumulador/N;
    printf("%f\n", res);
    return 0;
}