
#include <stdio.h>

void quadrado(int N)
{
    int a;
    for (int i = 1; i < (1 + N); i++)
    {
        if (i != N)
        {
            for (int j = i; j < (i + N); j++)
            {
                printf("%d\t", j);
            }
            printf("\n");
        }
        else
        {
            for (int j = i; j < (i + N - 1); j++)
            {
                printf("%d\t", j);
                a = j;
            }
            printf("%d", (a+1));
            printf("\n");
        }
    }
}

int main()
{
    int N;
    scanf("%d", &N);
    quadrado(N);
    return 0;
}