

#include <stdio.h>

int main(){
    int N, i = 0;
    float valor, sum = 0, media;
    
    scanf("%d", &N);

    while (++i <= N){
        scanf("%f", &valor);
        sum += valor;
    }
    media = sum/N;
    printf("%.2f\n", media);
    return 0;
}

