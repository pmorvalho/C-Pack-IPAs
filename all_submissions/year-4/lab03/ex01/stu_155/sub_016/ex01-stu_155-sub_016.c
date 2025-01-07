
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
        int final_num = N + i - 1;

        for (int j = i; j < final_num; ++j)
        {
            printf("%d\t", j);
        }

        printf("%d\n", final_num);
    }
    return;
}