

#include <stdio.h>

int main() {
    int n;
    float valor, min, max;

    scanf("%d", &n);
    scanf("%f", &valor);
    min = max = valor;

    while (--n) {
        scanf("%f", &valor);
        if (valor < min)
            min = valor;
        if (valor > max)
            max = valor;
    }

    printf("min: %f, max: %f\n", min, max);
    return 0;
}