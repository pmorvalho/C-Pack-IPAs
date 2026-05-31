
#include <stdio.h>


void piramide(int N)
{
    int i, j, n;

    for(j = 0; j < N; j++)
    {
        n = 1;
        for(i = 1; i <= N + j; i++)
        {

            if(i == N + j)
            {
                printf("%d", n);
            }

            else if (i == N)
            {
                printf("%d ", n--);
            }

            else if( i > N)
            {
                printf("%d ", n--);
            }

            else if(i >= N - j)
            {
                printf("%d ", n++);
            }

            else
            {
                printf("  ");
            }
            
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