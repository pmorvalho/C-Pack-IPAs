
#include<stdio.h>
int main(){
    int N, i;
    float valor, soma=0, media;
    scanf("%d", &N);
    for(i=1; i<=N; i++){        
        scanf("%f", &valor);
        soma = soma + valor;
    }
    media = soma/N;
    printf("%.2f\n", media);
    return 0;
}