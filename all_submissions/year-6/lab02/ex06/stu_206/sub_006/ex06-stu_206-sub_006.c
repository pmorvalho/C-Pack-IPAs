

#include <stdio.h>

int main() {
    int n, i;
    float valor, min, max;
    if (scanf("%d", &n) != 1 || n<= 0) return 0;
    scanf("%f", &valor);
    min = valor;
    max = valor;
    i = 1;
    while (i < n) {
        scanf("%f", &valor);
        if (valor < min) {
            min = valor;
        }
        if (valor > max) {
            max = valor;
        }
        i++;
    }
    printf("min: %f, max: %f\n", min, max);
    return 0;
}