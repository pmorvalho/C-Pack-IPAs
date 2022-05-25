#include <stdio.h>

void quadrado(int N);

int main()
{
    int N;
   
    scanf("%d", &N);
   
    quadrado(N);
   
    return 0;
}

void quadrado(int N)
{
    int i, j;
   
    for(i = 0; i <= N - 1; i++)
    {
        for(j = 1; j <= N; j++)
        {
            printf("%d", i + j);
            printf(j == N ? "\n" : "\t");
        }
    }
}