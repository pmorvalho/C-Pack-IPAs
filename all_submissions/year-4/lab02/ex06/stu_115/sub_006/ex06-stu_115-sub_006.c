
#include <stdio.h>
float min;
float max;
float aux;
int N;
int i = 1;


int main() {
    scanf("%d %f", &N, &aux);
    min = aux;
    max = aux;
    for (i; i<N; i++) {
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