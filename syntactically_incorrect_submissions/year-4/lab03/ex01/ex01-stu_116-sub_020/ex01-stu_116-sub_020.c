
#include <stdio.h>

#define QUADRADO 5

void quadrado(int N)
{
    for (int i = 1; i < (1 + N); i++)
    {
        for (int j = i; j < (i + N); j++)
        {
            printf("%d\t", j);
        }
        printf("\n");
    }
}

int main()
{
    int N;
    scanf("%d",&N);
    quadrado(N);
    return 0;
}