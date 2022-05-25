#include <stdio.h>



void quadrado(int N)
{
    int a, i, j;
    for(i = 1; i <= N; i++)
    {
        a = i;
        for (j = 1; j <= N; j++)
        {
            printf("%d", a);
            if(j < N)
            {
                printf("\t");
            }
            a++;
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