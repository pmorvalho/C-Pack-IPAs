

#include <stdio.h>

int main() {
    int n, i;
    float min, max, valor;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%f", &valor);
        if (i == 0)
            min = (max = valor);
        if (valor < min)
            min = valor;
        else if (valor > max)
            max = valor;
    }
    printf("min: %f, max: %f\n", min, max);
    return 0;
}