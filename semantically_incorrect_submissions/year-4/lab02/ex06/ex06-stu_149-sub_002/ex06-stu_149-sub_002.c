
#include <stdio.h>

int main() {

    int N;
    float min = 0, max = 0, aux;

    scanf("%d", &N);

    while(N--) {
        scanf("%f", &aux);

        min = (aux < min) ? aux : min;
        max = aux > max ? aux : max;
    }

    printf("min: %f, max: %f\n", min, max);

    return 0;
}