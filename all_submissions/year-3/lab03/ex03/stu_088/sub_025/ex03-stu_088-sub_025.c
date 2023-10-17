

#include <stdio.h>

void cruz(int N);

int main()
{
    int N;

    scanf("%d", &N);
    cruz(N);

    return 0;
}

void cruz(int N)
{
    int i, j;

    for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
        {
            if(j)
                putchar(' ');
            putchar((i == j) || (i+j == N-1) ? '*':'-');
        }
        putchar('\n');
    }    
}