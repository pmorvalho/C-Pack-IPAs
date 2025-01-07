
#include <stdio.h>

#define VECMAX 100

int main()
{
    int n;
    int vetor[VECMAX];
    int max = 0;
    
    scanf("%d", &n);

    
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &vetor[i]);
        if (vetor[i] > max) 
        {
            max = vetor[i];
        }
    }

    for (int k = max; k>0;k--)
    {
        for (int j = 0; j < n; j++)
        {
            if (vetor[j]==k)
            {
                printf("*");
                vetor[j]--;
            }
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}