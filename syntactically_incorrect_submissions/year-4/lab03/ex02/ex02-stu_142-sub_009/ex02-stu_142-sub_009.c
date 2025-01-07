

#include <stdio.h>

void piramide(int N)
{
    int spaces = (N) * 2;
    for (int i = 1; i <= N; i++)
    {
        
        printf("%*s", spaces, " ");

        
        for (int j = i; j > 0; j--)
        {
            printf("%d ", j);
        }
        
        for (int j = 2; j <= i; j++)
        {
            printf("%d ", j);
        }
        
        printf("%*s", spaces, " ");

        printf("\n");
        spaces -= 2;
    }
}

int main()
{
    int N = 0;
    while (N < 2)
    {

        scanf("%d ", &N);
    }
    piramide(N);
    return 0;
}