


#include <stdio.h>

void cruz(int N)
{
    int cruz_final = N - 1, cruz_inicial = 0;
    for (int i = 1; i <= N; i++)
    {
        
        for (int j = 0; j < N; j++)
        {
            if (j == cruz_inicial || j == cruz_final)
            {
                printf("*");
            }
            else
            {
                printf("-");
            }
            printf(" ");
        }
        cruz_inicial++;
        cruz_final--;
        printf("\n");
    }
}

int main()
{
    int N = 0;
    scanf("%d ", &N);
    cruz(N);
    return 0;
}