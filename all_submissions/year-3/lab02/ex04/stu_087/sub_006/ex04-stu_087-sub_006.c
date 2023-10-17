
#include <stdio.h>

int main(){

    int maior,menor,meio,temp;

    scanf("%d%d%d", &maior, &meio, &menor);

    if (meio > maior){
        temp = meio;
        meio = maior;
        maior = temp;
    }

    if (menor > maior){
        temp = menor;
        menor = maior;
        maior = temp;
    }

    if (menor > meio){
        temp = menor;
        menor = meio;
        meio = temp;
    }

    printf("%d %d %d\n", menor, meio, maior);

    return 0;
}