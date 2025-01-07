
#include <stdio.h>

void cruz(int N)
{
    for(int j = 1; j <= N; j++)
    {
        for(int i = 1; i <= N; i++)
        {
            if ( i == j)
            {
                printf("* ");
            }
            else if ( i == N - j + 1)
            {
                printf("* ");
            }
            else
            {
                printf("- ");
            }
        }
        printf("\n");
    }
}

int main()
{
    int N;

    scanf("%d", &N);

    cruz(N);

    return 0;
}