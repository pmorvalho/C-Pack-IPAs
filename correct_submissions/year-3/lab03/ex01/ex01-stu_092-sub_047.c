
#include <stdio.h>



void quadrado(int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (j == n -1)
                printf("%d\n", i+j+1);
            else
                printf("%d\t", i+j+1);
        }
    }
    return;
}

int main()
{
    int n;
    scanf("%d", &n);
    while (n < 2)
        scanf("%d", &n);
    quadrado(n);
    return 0;
}
