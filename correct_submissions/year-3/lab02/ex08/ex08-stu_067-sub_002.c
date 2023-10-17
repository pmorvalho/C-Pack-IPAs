
#include<stdio.h>
int main(){
    int N, i;
    float val, soma=0, media;
    scanf("%d", &N);
    for(i=1; i<=N; i++){        
        scanf("%f", &val);
        soma = soma + val;
    }
    media = soma/N;
    printf("%.2f\n", media);
    return 0;
}