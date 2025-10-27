

#include <stdio.h>

int main() {
    int N, i = 0;
    float numero,media, soma = 0;

    printf("introduz um numero inteiro que representa a quantidade do numeros inseridos: ");
    scanf("%d",&N);

    while (i < N){
        scanf("%f",&numero);
        soma = numero + soma;
        i++;
    }
    media = soma / N;
    printf("%.2f\n", media);

    return 0;
}