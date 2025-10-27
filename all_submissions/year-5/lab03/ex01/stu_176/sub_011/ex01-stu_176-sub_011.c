
#include <stdio.h>

void quadrado(int N)
{
    int linha, i;

    for (linha = 0; linha < N; linha++)
    {
        for (i = 1; i <= N; i++)
        {
            printf("%d\t", (i + linha));
        } 
        printf("\n");
    }
}

int main()
{
    int n;

    scanf("%d", &n);
    quadrado(n);
    return 0;
}