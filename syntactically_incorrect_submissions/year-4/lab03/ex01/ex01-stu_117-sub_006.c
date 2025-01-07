
#include <stdio.h>

void quadrado(int N)
{
    int num;
    for(int i = 1; i <= N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            num = i + j;
            if(j == N)
                printf("%d", num);
            else
                printf("%d\t", num);
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