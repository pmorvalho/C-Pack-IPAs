#include <stdio.h>

void quadrado(int N)
{
    int i, j, arr[N];
    for (i = 0; i < N; i++)
    {
        arr[i] = i + 1;
    }
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("%d\t", arr[j]);
            arr[j]++;
        }
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
