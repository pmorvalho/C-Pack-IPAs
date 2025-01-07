

#include <stdio.h>

void espacos(int n)
{
    for(int i = 1; i <= n; ++i)
    {
        printf("  ");
    }
}

void sequencia(int n)
{
    if(n != 1)
    {
        for(int i = 1; i <= n; ++i)
        {
            printf("%d ",i);
        }
        for(int i = n -1; i > 1; --i)
        {
            printf("%d ",i);
        }
    }
    printf("1");
}

void piramide(int n)
{
    for(int i = 1; i <= n; ++i)
    {
        espacos(n - i);
        sequencia(i);
        printf("\n");
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    piramide(n);
    return 0;
}