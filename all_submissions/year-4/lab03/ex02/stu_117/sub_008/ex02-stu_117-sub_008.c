
#include <stdio.h>

void piramide(int N)
{
    for(int i = 1; i <= N; i++)
    {
        for(int j = 1; j <= 2 * (N - i); j++)
            printf(" ");
        for(int k = 1; k <= i; k++)
            printf("%d ", k);
        for(int l = i - 1; l >= 1; l--)
        {
            printf("%d", l); 
            if(l - 1)
                printf(" ");
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