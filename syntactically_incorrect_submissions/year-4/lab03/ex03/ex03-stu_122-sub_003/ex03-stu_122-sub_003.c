
#include <stdio.h>

void cruz (int n)
{
    for (int i = 1; i <= n / 2; i++)
        {
            for (int j = 1; j < i; j++)
                printf("- ");
            printf("*");

            for (int j = n; j - 2*i > 0 ; j -= 1 )
                printf(" -");
            printf(" *");

            for (int j = 1; j < i; j++)
                printf(" -");

        printf("\n");
        }
    for (int i = 1; i <= n / 2; i++)
        {
            for (int j = n / 2; j < )
        }
    
        
}
int main ()
{
    int n;
    scanf("%d",&n);
    cruz(n);
    return 0;
}