
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
    int n;
    scanf("%d", &n);
    quadrado(n);
    return 0;
}