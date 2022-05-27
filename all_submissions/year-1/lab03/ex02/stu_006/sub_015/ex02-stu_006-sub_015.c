#include <stdio.h>

void piramide(int N);

int i, j, N, spaces;

int main()
{
    scanf("%d", &N);
    piramide(N);
    return 0;
}


void piramide(int N)
{
    for (i = 1; i <= N; i++)
    {
        for (spaces = N - i; spaces > 0; spaces--)
            printf("  ");
        
        if (i == 1) printf("%d", i);
        else
        {
            for (j = 1; j <= i; j++)
                printf("%d ", j);

            for (j = i - 1; j > 0; j--)
            {
                printf("%d", j);
                if (j != 1) printf(" ");
            }
        }
        printf("\n");
    }
}