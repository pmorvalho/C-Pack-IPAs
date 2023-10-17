
#include <stdio.h>



#define INICIO 0
#define LENGTH 3

int main()
{
    int i, n, vetor[LENGTH], vetor_ordenado[LENGTH], stand;
    for (i = INICIO; i < LENGTH; i++)
        scanf("%d", &vetor[i]);
    for (i = INICIO; i < LENGTH; i++)
    {
        for (n = INICIO; n < LENGTH; n++)
        {
            if (vetor[i] >= vetor[n])
            {
                stand = vetor[n];
                vetor[n] = vetor[i];
                vetor[i] = stand;
            } 
        }
    } 
    for (i = INICIO; i < LENGTH; i++)
        printf("%d\n", vetor[i]);
    return 0;
}