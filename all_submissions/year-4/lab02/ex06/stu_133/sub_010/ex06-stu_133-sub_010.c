
#include <stdio.h>

int main() {
    int N, counter;
    float valor, min, max;

    scanf("%d", &N);
    scanf("%f", &valor);
    min = max = valor;

    for (counter = 1; counter < N; counter++) {
        scanf("%f", &valor);

        if (valor > max) {
            max = valor;
        } else if (valor < min) {
            min = valor;
        }
    }

    printf("min: %f, max: %f\n", min, max);
    return 0;
}