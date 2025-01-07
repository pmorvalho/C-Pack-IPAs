
#include <stdio.h>

void quadrado(int N)
{
    int rows = N;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = i; j <= N + i - 1; j++)
        {
            if (j == N + i - 1)
                printf("%d", j);
            else
                printf("%d\t", j);
        }
        printf("\n");
    }
}

int main()
{
    int N = 0;
    while (N < 2)
    {

        scanf("%d ", &N);
    }
    quadrado(N);
    return 0;
}