
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
        int final_n = N + i - 1;

        for (int j = i; j < final_n; ++j)
        {
            printf("%d\t", j);
        }
        if (i == N)
            printf("%d", final_n);
        else
            printf("%d\n", final_n);
    }
    return;
}