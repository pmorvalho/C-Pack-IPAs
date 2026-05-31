
#include <stdio.h>

void quadrado(int n)
{
    int i, j;
    for(i = 1; i <= n, i++)
    {
        for (j = 0; j < n; j++)
        {
            if(j) 
                putchar('\t');
            printf("%d", i + j)
        }
    putchar('\n');
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    quadrado(n);
    return 0;
}
