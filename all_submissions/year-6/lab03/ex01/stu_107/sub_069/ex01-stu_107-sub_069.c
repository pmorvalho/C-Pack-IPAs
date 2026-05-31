
#include <stdio.h>


void quadrado(int N)
{
    int i, j;

    for(j = 0; j < N; j++)
    {
        for(i = 1; i <= N; i++)
        {
            printf("%d", i + j);
            if(i != N)
            {
                printf("\t");
            }
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