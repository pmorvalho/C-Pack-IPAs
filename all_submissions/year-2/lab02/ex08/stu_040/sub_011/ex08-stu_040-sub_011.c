#include <stdio.h>

                                 

int main() {

    int i,N;
    float r, soma = 0.0, media;
    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        scanf("%f", &r);
        soma = soma + r;
        
    }
    media = soma / N;
    printf("%.2f\n", media);
    return 0;
}