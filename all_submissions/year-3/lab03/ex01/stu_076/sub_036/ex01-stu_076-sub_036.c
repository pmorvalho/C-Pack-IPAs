
#include <stdio.h>

void quadrado(int N)
{
    int i, j;
    
    for (i = 1; i <= N; i++)
    {
        for (j = i; j < N; j++)
        {
            printf("%d\t", j);
        }
        printf("%d\n", N + i - 1);
    }
}

int main()
{
    int N;
    while (N < 1)
    {
        scanf("%d", &N);
    }

    quadrado(N);

    return 0;
}
