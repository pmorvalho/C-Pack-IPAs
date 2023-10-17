

#include <stdio.h>

int main(){

    int N;
    scanf ("%d \n", &N);

    int i;
    float sum=0, valor, media;

    for(i=0; i<N; i++){
        scanf("%f", &valor);
        sum += valor;
    }

    media = sum/N;
    printf("%.2f \n", media);

    return 0;
}