#include <stdio.h>

void piramide(int N);

int main()
{
    int N;
   
    scanf("%d", &N);
   
    piramide(N);
   
    return 0;
}

void piramide(int N)
{
    int i, j;
   
    for(i = 1; i <= N; i++)
    {
        for(j = 1; j <= 2 * (N - i); j++)
            putchar(' ');
       
        for(j = 1; j <= i; j++)
        {
            if(i == 1)
                printf("%d", j);
            else
                printf("%d ", j);
        }
       
        for(j = i - 1; j >= 1; j--)
        {
            if(j == 1)
                printf("%d", j);
            else
                printf("%d ", j);
        }

        printf("\n");
    }
}