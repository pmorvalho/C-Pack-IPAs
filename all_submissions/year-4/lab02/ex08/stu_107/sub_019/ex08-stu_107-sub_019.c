
#include <stdio.h>

int main()
{
    float media, numero, soma = 0, i = 0;
    int N;
    
    scanf("%d", &N);

    while( i <= N)
    {
        scanf("%f", &numero);

        soma = (soma + numero);
        i++;
    }


    media = soma / i;
    printf("%.2f", media);
    return 0;
}