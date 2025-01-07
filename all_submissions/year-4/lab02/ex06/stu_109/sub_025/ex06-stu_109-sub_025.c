
#include <stdio.h>

int main() {
    int N, i, aux;
    float min, max;

    scanf("%d", &N);

    for(i = 0; i < N; i++){
        scanf("%f", &aux);

        if(aux < min){
            min = aux;
        }

        if(aux > max){
            max = aux;
        }
    }

    printf("min: %f, max: %f\n", min, max);

    return 0;
}
