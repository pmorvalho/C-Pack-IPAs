#include <stdio.h>

void cruz(int N);

int i, j, N;

int main()
{
    scanf("%d", &N);
    cruz(N);
    return 0;
}


void cruz(int N)
{
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++) {
            printf(i - j == 0 || i + j == N - 1 ? "*" : "-");

            if (j < N - 1)
                printf(" ");
        }
        printf("\n");
    }
}