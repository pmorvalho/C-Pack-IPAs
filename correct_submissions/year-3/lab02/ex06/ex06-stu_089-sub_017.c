

#include <stdio.h>

int main()
{
    int N = 0;
    int i = 2;
    float aux = 0, maior = 0, menor = 0;

    scanf("%d", &N);

    scanf("%f", &maior);
    scanf("%f", &menor);

    if(menor > maior){
        aux = menor;
        menor = maior;
        maior = aux;
    }

    while(i < N){

        scanf("%f", &aux);
        
        if(aux < menor)
            menor = aux;
        if(aux > maior)
            maior = aux;

        i ++;
    }
    printf("min: %f, max: %f\n", menor, maior);

    return 0;
}