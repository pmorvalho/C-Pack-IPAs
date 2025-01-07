

#include <stdio.h>

void quadrado(int n)
{
    int first = 1;
    for (int c = 1; c <= n; c++)
    {
        for (int l = first; l < first + n - 1; l++)
        {
            printf("%d\t", l);
        }

        printf("%d\n", first + n - 1);
        first++;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    quadrado(n);
}