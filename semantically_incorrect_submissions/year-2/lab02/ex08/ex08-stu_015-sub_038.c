#include <stdio.h>

#define PASSO 1

float N, num, media, soma = 0;
float inicial = 0;

int main(){

    scanf("%f", &N);
    while (inicial < N){
        scanf("%f", &num);
        soma += num;
        inicial += PASSO;
    }

    media = soma / N;
    printf("%2.f\n", media);

    return 0;

}