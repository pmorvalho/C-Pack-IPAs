
#include <stdio.h>
#include <stdlib.h>

void quadrado(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j < n + i; j++)
        {
            printf("%d\t", j);
        }
        printf("\n");
    }
}

int main(void)
{
    quadrado(5);
    return 0;
}