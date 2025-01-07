
#include <stdio.h>

int main() {
    int N;
    double numero, maior, menor;

    scanf("%d", &N);

    scanf("%lf", &numero);
    maior = menor = numero;
    for (int i = 1; i < N; i++) {
        scanf("%lf", &numero);

        if (numero > maior) {
            maior = numero;
        }

        if (numero < menor) {
            menor = numero;
        }
    }   

    printf("min: %f, max: %f\n", menor, maior);
    return 0;
}