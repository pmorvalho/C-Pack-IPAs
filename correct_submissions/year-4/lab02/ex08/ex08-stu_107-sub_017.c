
#include <stdio.h>

int main()
{
    int N;
    float media, numero, soma = 0, i = 0;

    
    scanf("%d", &N);

    while( i < N)
    {
        scanf(" %f", &numero);

        soma = (soma + numero);
        i++;
    }


    media = soma / N;
    printf("%.2f\n", media);
    return 0;
}