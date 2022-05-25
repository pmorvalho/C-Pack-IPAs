#include <stdio.h>

#define VECMAX 100

int main()
{
    int n, i, j;
    int vetor[VECMAX];

    scanf("%d\n", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &vetor[i]);
        
        for(j = 1; j <= vetor[i]; j++)
            printf("*");
        
        printf("\n");
    }

    return 0;
}