
#include <stdio.h>

void piramide(int N)
{
    int numero;

    for(int j = 1; j <= N; j++)
    {
        numero = 1;
        for(int i = 1; i <= N + j - 1; i++)
        {
            if( i <= N - j)
            {
                printf(" ");
            }
            else if ( i < N)
            {
                printf("%d", numero++);
            }
            else if ( i == N)
            {
                printf("%d", j);
            }
            else if ( i <= N + j -1)
                printf("%d", --numero);
        }
        printf("\n");
    }
}

int main()
{
    int N;

    scanf("%d", &N);

    piramide(N);

    return 0;
}