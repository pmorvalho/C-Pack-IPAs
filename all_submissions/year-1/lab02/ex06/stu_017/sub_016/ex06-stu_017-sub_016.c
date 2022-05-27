#include <stdio.h>



int main () {
    int n, contador;
    float min, max, num;

    scanf("%d", &n);
    scanf("%f", &max);

    min = max;

    for (contador = 1; contador < n; contador++) {
        scanf("%f", &num);
        if (num > max) {
            max = num;
        }
        else if (num < min) {
            min = num;
        }
    }
    printf("min: %f, max: %f\n", min, max);
    return 0;
}