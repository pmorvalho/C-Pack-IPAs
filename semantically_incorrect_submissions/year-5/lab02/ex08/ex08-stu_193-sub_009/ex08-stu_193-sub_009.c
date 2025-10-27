

#include <stdio.h>

int main() {
    int numero, N, i = 0, soma = 0;
    double media;

    printf("introduz um numero inteiro que representa a quantidade do numeros inseridos: ");
    scanf("%d",&N);

    while (i < N){
        scanf("%d",&numero);
        soma = numero + soma;
        i++;
    }
    media = soma / N;
    printf("%.2f\n", media);

    return 0;
}