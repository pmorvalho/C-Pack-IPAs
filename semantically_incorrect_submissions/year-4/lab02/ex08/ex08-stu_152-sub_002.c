

#include <stdio.h>

int main(){
    int N, contador = 0;
    float num, media, soma = 0;

    scanf("%d",&N);
    scanf("%f",&num);
    soma += num;

    while (++contador < N){
        scanf("%f",&num);
        soma += num;
    }

    media = soma / N;
    printf("%.2f",media);
    
    return 0;
}