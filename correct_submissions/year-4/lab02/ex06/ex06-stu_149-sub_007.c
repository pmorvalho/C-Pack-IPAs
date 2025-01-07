
#include <stdio.h>

int main() {

    int N;
    float min, max, aux;

    scanf("%d", &N);
    scanf("%f", &min);
    max = min;
    N--;
    while(N--) {
        scanf("%f", &aux);

        min = (aux < min) ? aux : min;
        max = (aux > max) ? aux : max;
    }

    printf("min: %f, max: %f\n", min, max);

    return 0;
}