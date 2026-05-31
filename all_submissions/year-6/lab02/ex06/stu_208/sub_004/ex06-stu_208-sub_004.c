
#include <stdio.h>

int main() {
    int N, i;
    float num, min, max;

    scanf("%d", &N);

    if (N <= 0) {
        printf("N deve ser positivo.\n");
        return 1;
    }
    scanf("%f", &num);
    min = max = num;

    for (i = 1; i < N; i++) {
        scanf("%f", &num);
        if (num < min) {
            min = num;
        }
        if (num > max) {
            max = num;
        }
    }

    printf("min: %f, max: %f\n", min, max);

    return 0;
}