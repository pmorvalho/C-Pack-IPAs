
#include <stdio.h>

int main() {
    int N, i;
    scanf("%d", &N);
    float media = 0;

    for (i = 0; i < N; i++) {
        float num;
        scanf("%f", &num); 
        
        media += num;
    }
    media = media / N;
    printf("%.2f\n", media);
}