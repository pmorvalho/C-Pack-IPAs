
#include <stdio.h>

void piramide(int N)
{
    int i, j;

    for (i = 1; i <= N; i++)
    {
        for (j = 1; j <= (N - i) * 2; j++)
        {
            printf(" ");
        }
        if (i != 1)
        {
            for (j = 1; j <= i; j++)
            {
                printf("%d ", j);
            }
            for (j = i - 1; j > 1; j--)
            {
                printf("%d ", j);
            }
        }
        printf("1\n");
    }
}

int main()
{
    int N = 0;

    while (N < 1)
    {
        scanf("%d", &N);
    }

    piramide(N);
    
    return 0;
}
