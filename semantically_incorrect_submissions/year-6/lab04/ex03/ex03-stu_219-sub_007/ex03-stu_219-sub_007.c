

#include <stdio.h>
#define VECMAX 100

int main ()
{
    int i, j, n, v[VECMAX], maior = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &v[i]);
        if (v[i] > maior)
            maior = v[i];
    }

    for (i = maior; i > 0; i--)
    {
        for (j = 0; j < n; j++)
        {
            v[j] >= i ? putchar('*') : putchar(' ');
            j != n - 1 ? putchar(' ') : putchar('\n');
        }
    }
    
    return 0;
}