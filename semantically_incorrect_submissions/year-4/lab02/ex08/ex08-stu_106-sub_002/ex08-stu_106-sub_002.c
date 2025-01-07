
#include <stdio.h>

int main() {
    int N, i = 0;
    float num, soma = 0.0, media;
    scanf("%d", &N);
    
    while (i < N) {
        scanf("%f", &num);
        soma += num;
        i++;
    }
    
    media = soma/N;
    printf("%.2f", media);

    return 0;
}