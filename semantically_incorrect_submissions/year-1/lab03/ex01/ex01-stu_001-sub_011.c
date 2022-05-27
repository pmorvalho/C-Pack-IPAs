#include <stdio.h>

void quadrado(int N)
{
    int i = 1, j, k;

    for (j = 1; j <= N; j++)
    {
        for (k = 0; k < N; k++)
        {
            printf("%d\t", i);
            i++;
        }
        i = j + 1;
        printf("\n");
    }
}

int main()
{
    int N;
    scanf("%d", &N);

    while (N < 2)
    {
        scanf("%d", &N);
    }

    quadrado(N);
    return 0;
}
