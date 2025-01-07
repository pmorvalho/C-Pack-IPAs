

#include <stdio.h>

int main()
{
    int  comprimento, counter;
    float menor, maior;
    scanf("%d", &comprimento);

    float num[comprimento];    

    for (counter = 0; counter < comprimento; counter++)
        scanf("%f", &num[counter]);
    
    maior = num[0];
    menor = num[0];

    for (counter = 1; counter < comprimento; counter++){
        if (num[counter] > maior)
            maior = num[counter]; 
    
        if (num[counter] < menor)
            menor = num[counter]; 
    }
    printf("min: %f, max: %f\n", menor, maior);

}

