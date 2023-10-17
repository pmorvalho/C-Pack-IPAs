
#include <stdio.h>

#define VECMAX 100

int main()
{
    int vetor[VECMAX], n, i;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < n; i++)
    {
        while (vetor[i] > 0)
        {
            printf("*");
            vetor[i] -= 1;
        }
        printf("\n");
    }
    
    
    return 0;
}
