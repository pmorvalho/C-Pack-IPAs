#include <stdio.h>
int main() {
    int i=1, N;
    float min, max, valor;
    scanf("%d",&N);
    scanf("%f",&valor);
    min=valor;
    max=valor;
    while (i<N) {
        scanf("%f",&valor);
        i++;
        if (valor>max) {
            max=valor;
        }
        else if (valor<min) {
            min=valor;
        }
    }
    printf("min: %f, max: %f\n", min, max);
    return 0;
}