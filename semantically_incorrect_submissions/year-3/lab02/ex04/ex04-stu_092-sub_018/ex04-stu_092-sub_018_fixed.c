
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
    for (i = INICIO; i < LENGTH - 1; i++)
        printf("%d ", vetor[i]);
    printf("%d\n", vetor[LENGTH - 1]);
    return 0;
}
