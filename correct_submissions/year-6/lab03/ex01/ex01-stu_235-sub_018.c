

#include <stdio.h>

void quadrado(int n)
{
    int i,j;

    for(i = 1; i <= n;i++)
    {
        for(j = 0; j < n;j++)
            if (j == n - 1)
                printf("%d\n", i+j);
            else
                printf("%d\t", i+j);
    }
}

int main ()
{
    int num;

    scanf("%d", &num);
    if (num >=2)
        quadrado(num);
    return 0;
}