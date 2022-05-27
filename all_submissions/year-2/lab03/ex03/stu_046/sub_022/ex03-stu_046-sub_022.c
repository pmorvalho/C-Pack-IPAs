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
   
    for(i = 1; i <= N; i++)
    {
        for(j = 1; j <= N; j++)
        {
            printf(j == i || j == N - i + 1 ? "*" : "-");
            printf(j < N ? " " : "\n");
        }
    }
}