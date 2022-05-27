#include <stdio.h>
#include <stdlib.h>

void cruz(int N)
{
    int i, j, *arr;
    arr = malloc(N * sizeof(int));
    for (j = 0; j < N; j++)
    {
        for (i = 0; i < N; i++)
        {
            arr[i] = 0;
        }
        arr[j] = 1;
        arr[N - j - 1] = 1;
        for (i = 0; i < N; i++)
        {
            if (arr[i] == 0)
            {
                printf("- ");
            }
            else
            {
                printf("* ");
            }
        }
        printf("\n");
    }
    free(arr);
}

int main()
{
    int N;
    scanf("%d", &N);

    cruz(N);

    return 0;
}
