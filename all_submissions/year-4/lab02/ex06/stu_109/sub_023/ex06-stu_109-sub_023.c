

#include <stdio.h>

int main() {
    int N, i;
    float aux, min, max;

    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        scanf("%f", &aux);

        if (i == 0) {
            min = max = aux;
        } else {
            if (aux < min) {
                min = aux;
            }

            if (aux > max) {
                max = aux;
            }
        }
    }

    printf("min: %f, max: %f\n", min, max);

    return 0;
}
