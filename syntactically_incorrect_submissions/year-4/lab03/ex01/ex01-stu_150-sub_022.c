

#include <stdio.h>

void quadrado(int n)
{
    for(int l = 1; l <= n; l++)
    {
        for(int c = l; c <= n + l - 1; c++)
        {
            if (c == n +l -1)
            {
                printf("%d", c);
            } else {
                printf("%d\t", c);
            }
        }
        printf("\n");
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    quadrado(n);
    return 0;
}