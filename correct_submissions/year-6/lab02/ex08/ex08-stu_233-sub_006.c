

#include <stdio.h>

int main() {
    int N, i;
    float val, soma = 0;
    float media;
    scanf("%d", &N);
    
    for(i = 0; i < N; i++){
        scanf("%f", &val);
        soma += val;
    }
    media = soma / N;
    printf("%.2f\n", media);
    return 0;
}