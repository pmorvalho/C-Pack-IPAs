#include <stdio.h>



void quadrado(int N)
{
    int a, i;
    for(i = 1; i <= N; i++)
    {
        for (a = i; a < N + i; a++)
        {
            printf("%d\t", a);
        }
        printf("\n");
    }
}

int main()
{
    int N;
    scanf("%d", &N);
    quadrado(N);
    return 0;
}