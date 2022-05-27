#include <stdio.h>




void piramide(int N)
{
    int i, j;
    for (i = 1; i<= N; i++)
    {
        for(j = 0; j < N - i; j++)
        {
            printf(" ");
            printf(" ");
        }
        
        for(j = 1; j <= i; j++)
        {
            printf("%d", j);
            printf(" ");
        }

        for(j = i - 1; j > 1; j--)
        {
            printf("%d", j);
            printf(" ");
        }
    if (i != 1)
        printf("1\n");
    else
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