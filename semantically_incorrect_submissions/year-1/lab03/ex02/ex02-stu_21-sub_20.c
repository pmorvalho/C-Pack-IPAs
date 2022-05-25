#include <stdio.h>




void piramide(int N)
{
    int i, j, k;
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

        for(k = i - 1; k >= 1; --k)
        {
            printf("%d", k);
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