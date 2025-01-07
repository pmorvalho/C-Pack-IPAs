
#include <stdio.h>

int main() {
    int N;
    float aux, media, sum = 0;

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%f", &aux);
        sum += aux;
    }

    media = sum/N;

    printf("%.2f\n", media);
    
    return 0;
}