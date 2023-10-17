

#include <stdio.h>
void quadrado (int N); 
int main()
{
    int N;
    scanf("%d", &N);
    quadrado(N);
    return 0;
}

void quadrado (int N) 
{
    int i, j;
    for (i=1; i<=N; i++)
    {
        for (j=0; j<N; j++)
        {
            if (j)
            putchar('\t'); 
        printf("%d", i+j);
        }
        putchar('\n');
    }
}