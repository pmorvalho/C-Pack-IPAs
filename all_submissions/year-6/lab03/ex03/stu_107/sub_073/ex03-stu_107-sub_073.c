
#include <stdio.h>

void cruz(int N)
{
    int i, j;

    for(j = 0; j < N; j++)
    {
        for(i = 0; i < N; i++)
        {   
            if((i == (N - 1)) && (j == 0) )
            {
                printf("*");
            }
            else if((i == (N - 1)) && (j == (N - 1)) )
            {
                printf("*");
            }

            else if((i == (N - 1)))
            {
                printf("-");
            }

            else if(i == j)
            {
                printf("* ");
            }

            else if(i == ((N - 1) - j))
            {
                printf("* ");
            }
            else
            {
                printf("- ");
            }
        }
        printf("\n");
    }
}
int main()
{
    int N;

    scanf("%d", &N);

    cruz(N);

    return 0;
}