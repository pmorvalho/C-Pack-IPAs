#include <stdio.h>

void cruz(int N);

int main()
{
    int size;

    scanf("%d", &size);
    cruz(size);

    return 0;
}

void cruz(int N)
{
    int i, j;
    
    for (i = 0; i < N; ++i)
    {
        for (j = 0; j < N; ++j)
        {
            if ((j == i) || (j == (N - i - 1)))
            {
                printf("*");
            }
            else
            {
                printf("-");
            }
            printf(" ");
        }
        printf("\n");
    }
}
