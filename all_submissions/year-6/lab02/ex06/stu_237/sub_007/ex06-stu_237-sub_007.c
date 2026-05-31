
#include <stdio.h>

int main() {
    int N;
    float value;
    float maior;
    float menor;

    scanf("%d", &N);
    scanf("%f", &maior);
    menor = maior;

    for (int i = 1; i < N; i++) {
        scanf("%f", &value);

        if (value < menor) {
            menor = value;
        }
        if (value > maior) {
            maior = value;
        }
    }

    printf("min: %f, max: %f\n", menor, maior);

    return 0;
}