
#include <stdio.h>

void quadrado(int N);

int main()
{
    int N = 0;

    scanf("%d", &N);

    if (N >= 2)
        quadrado(N);

    return 0;
}

void quadrado(int N)
{
    int i, j;

    for (i = 1; i <= N; i++)
    {
        for (j = i; j <= i + N - 1; j++)
        {
            printf("%d", j);
            if (j < i + N - 1)
                printf("\t");
        }
        printf("\n");
    }
}