
#include <stdio.h>

int main() {
    float min, max, aux;
    int N;
    scanf("%d %f", &N, &aux);
    min = aux;
    max = aux;
    for(int i = 1;i < N; i++) {
        scanf("%f", &aux);
        if (aux > max) {
            max = aux;
        } if (aux < min) {
            min = aux;
        }
    }
    printf("min: %f, max: %f\n", min, max);
    return 0;
}