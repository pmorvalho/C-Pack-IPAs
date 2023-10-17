
#include <stdio.h>

void piramide(int N)
{
    int i, j, k;
    for(i=1; i<=N; i++)
    {
        for(j=1; j<=(N-i); j++)
        {
            putchar(' ');
        }
        for(j=1; j<=i; j++)
        {
            printf("%d", j);
        }
        for(j=i-1; j>0; j--)
        {
            printf("%d", j);
        }
        putchar('\n');
    }
}

int main()
{
    int N;
    scanf("%d", &N);
    if(N>=2)
    {
        piramide(N);
    }
    return 0;
}