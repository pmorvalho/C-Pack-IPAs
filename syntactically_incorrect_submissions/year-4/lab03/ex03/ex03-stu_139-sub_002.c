



#include <stdio.h>

void cruz(int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i == j || i + j == N - 1)
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
    int n;
    scanf("%d", &n);
    cruz(n);
}