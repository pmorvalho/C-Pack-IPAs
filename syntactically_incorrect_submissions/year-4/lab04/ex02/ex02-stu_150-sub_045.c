

#include <stdio.h>
#define VECMAX 100

int main()
{
    int n, max = 0;
    int vetor[VECMAX];
    scanf("%d",&n);
    if (n <= VECMAX)
    {
        for (int i = 0; i <= n; i++)
        {
            scanf("%d",vetor[i]);
            if (max < vetor[i]) max = vetor[i];
        }
        for (int linha = 1; linha <= max; linha++)
        {
            for (int coluna = 0; coluna <= n; coluna++)
            {
                if (vetor[coluna] - linha >= 0) printf("*");
                else printf(" ");
            }
            printf("\n");
        }
        
    }
    return 0;
}