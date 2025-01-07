
#include <stdio.h>

int main(){
    int N, N_aux=1;
    float SOMA = 0;
    float media,Dado;

    scanf("%d", &N);

    while(N_aux <= N){
        scanf("%f", &Dado);
        SOMA += Dado;
        N_aux +=1;
    }

    media = SOMA/N;
    printf("%.2f\n", media);

    return 0;
}