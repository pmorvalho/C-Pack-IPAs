
#include <stdio.h>



#define INICIO 0
#define LENGTH 3

int main()
{
    int i, n, vetor[LENGTH], stand;
    for (i = INICIO; i < LENGTH; i++)
        scanf("%d", &vetor[i]);
    for (i = INICIO; i < LENGTH; i++)
    {
        for (n = INICIO; n < LENGTH; n++)
        {
            if (vetor[i] < vetor[n])
            {
                stand = vetor[n];
                vetor[n] = vetor[i];
                vetor[i] = stand;
            } 
        }
    } 
    for (i = INICIO; i < LENGTH; i++)
    {
        if (i == LENGTH-1)
            printf("%d", vetor[i]);
        else
            printf("%d ", vetor[i]);
    }
    printf("\n");
    return 0;
}