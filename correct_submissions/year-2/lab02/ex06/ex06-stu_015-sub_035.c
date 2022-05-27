#include <stdio.h>

#define PASSO 1

float N, num, primeiro, inicial = 1;
float maior, menor;

int main(){

    scanf("%f", &N);
    scanf("%f", &primeiro);
    maior = menor = primeiro;
    while (inicial < N){
        scanf("%f", &num);
        if (num < menor)
            menor = num;
        else if (num > maior)
            maior = num;
        inicial += PASSO;
    }
    printf("min: %f, max: %f\n", menor, maior);
    return 0;
}