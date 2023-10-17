#include <stdio.h>
#include <stdlib.h>
void quadrado(int N)
{
    int i, j, *arr;
    arr = malloc(N * sizeof(int));
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
        if (i != N - 1)
        {
            printf("\n");
        }
    }
    free(arr);
}

int main()
{
    int N;
    scanf("%d", &N);

    if (N >= 2)
    {
        quadrado(N);
    }

    return 0;
}
