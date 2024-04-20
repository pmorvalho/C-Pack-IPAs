
#include <stdio.h>


int main()
{
    int i;
    int maximo;
    int numero;
    i=0;
    scanf("%d", &maximo);
    while (i<2)
    {
        scanf( "%d", &numero);
        if (numero> maximo)
        {
            maximo= numero;
        }
        ++i;
    }
    printf("%d\n", maximo);
    return 0;
} 
