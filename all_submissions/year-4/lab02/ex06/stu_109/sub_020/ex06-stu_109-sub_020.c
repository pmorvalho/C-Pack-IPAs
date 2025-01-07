
#include <stdio.h>

int main() {
    int N;

    printf("Digite a quantidade de números (N): ");
    scanf("%d", &N);

    printf("Digite o 1º número: ");
    
    double numero, min, max;
    scanf("%lf", &numero);
    min = max = numero;

    for (int i = 2; i <= N; i++) {
        printf("Digite o %dº número: ", i);
        scanf("%lf", &numero);

        if (numero < min) {
            min = numero;
        }
        else{
            max = numero;
        }
    }

    printf("min: %f, max: %f\n", min, max);

    return 0; 
}
