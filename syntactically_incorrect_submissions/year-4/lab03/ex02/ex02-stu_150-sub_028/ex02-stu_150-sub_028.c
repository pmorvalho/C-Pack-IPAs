

#include <stdio.h>

void espacos(int n)
{
    for(int i = 1; i <= n; ++i)
    {
        printf(" ");
    }
}

void sequencia(int n)
{
    if(n == 1) printf("1");
    else
    {
        for(int i = 1; i <= n; ++i)
        {
            printf("%d",i);
        }
        for(int i = n -1; i >0; ++i)
        {
            printf("%d",i);
        }
    }
}

void piramide(int n)
{
    for(int i = 1; i <= n; ++i)
    {
        espacos(n - i);
        sequencia(i);
        espacos(n - i);
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    piramide(n);
    return 0;
}