
#include <stdio.h>



void quadrado(int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", i+j+1);
        }
        printf("\n");
    }
    return;
}

int main()
{
    int n;
    scanf("%d", &n);
    if (n > 2)
        quadrado(n);
    else
        scanf("%d", &n);
    return n;
}
