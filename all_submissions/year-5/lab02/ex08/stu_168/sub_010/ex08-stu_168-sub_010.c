
#include <stdio.h>

int main(){
    int N,i;
    float num,soma=0,media;
    scanf("%d",&N);
    for (i=0;i<N;i++){
        scanf("%f",&num);
        soma+=num;
    }
    media=soma/N;
    printf("%.2f\n", media);
    return 0;
}