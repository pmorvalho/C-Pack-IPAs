
#include <stdio.h>

void quadrado(int N);

int main()
{
    int n;
    scanf("%d", &n);
    quadrado(n);

    return 0;
}

void quadrado(int N)
{
    for (int i = 1; i <= N; ++i)
    {
        for (int j = i; j < N + i; ++j)
        {
            printf("%d\t", j);
        }

        printf("\n");
    }
    return;
}