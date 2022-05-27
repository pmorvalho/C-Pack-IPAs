#include <stdio.h>



void cruz(int N)
{
    int i, j;
    for (i = 1; i <= N/2; i++)
    {
        for (j = 1; j <= N; j++)
        {
            if (j==i || j==(N-i+1))
                printf("*");
            else
                printf("-");
            if (j==N)
                printf("\n");
            else
                printf(" ");
        }
    }
    if (N%2 != 0)
    {
        for (j = 1; j <= N; j++)
        {
            if (j == (N/2) + 1)
                printf("*");
            else
                printf("-");
            if (j==N)
                printf("\n");
            else
                printf(" ");
        }
    }
    for (i = N/2; i > 0; i--)
    {
        for (j = 1; j <= N; j++)
        {
            if (j==i || j==(N-i+1))
                printf("*");
            else
                printf("-");
            if (j==N)
                printf("\n");
            else
                printf(" ");
        }
    }
}


int main()
{
    int N;
    scanf("%d", &N);
    cruz(N);
    return 0;
}