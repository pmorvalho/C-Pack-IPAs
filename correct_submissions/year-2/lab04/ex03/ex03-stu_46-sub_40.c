#include <stdio.h>

#define VECMAX 100

int main()
{
    int n, i, j, maior = 0;
    int vetor[VECMAX];

    scanf("%d\n", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &vetor[i]);

        if(vetor[i] > maior)
            maior = vetor[i];
    }

    for(j = 1; j <= maior; j++)
    {
        for(i = 0; i < n; i++)
        {
            if(maior - j + 1 == vetor[i])
            {
                printf("*");
                vetor[i]--;
            }
            else
                printf(" ");
        }

        printf("\n");
    }

    return 0;
}