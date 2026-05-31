
#include <stdio.h>

void cruz(int N);

int main()
{
    int N = 0;

    scanf("%d", &N);

    cruz(N);

    return 0;
}

void cruz(int N)
{
    int i, j;

    for (i = 1; i <= N; i++)
    {
        for (j = 1; j <= N; j++)
        {
            if (j == i || j == N - i + 1)
                printf("*");
            else
                printf("-");
            if (j < N)
                printf(" ");
        }
        printf("\n");
    }
}