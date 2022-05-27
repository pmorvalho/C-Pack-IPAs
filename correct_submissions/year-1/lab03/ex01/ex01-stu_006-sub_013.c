#include <stdio.h>

void quadrado(int N);

int i, j, N;

int main()
{
    scanf("%d", &N);
    quadrado(N);
    return 0;
}


void quadrado(int N)
{
    for (i = 1; i <= N; i++)
    {
        for (j = i; j < (i+N-1); j++)
            printf("%d\t", j);

        printf("%d\n", i+N-1);
    }
}