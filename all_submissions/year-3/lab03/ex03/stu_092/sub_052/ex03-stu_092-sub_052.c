
#include <stdio.h>



void cruz(int n)
{
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (j == i)
                printf("* ");
            else if (j == (n - i + 1) && j != n)
                printf("* ");
            else if (j == (n - i + 1) && j == n)
                printf("*");
            else if (j != i && j != (n - i + 1))
                printf("- ");
            else if (j != i && j != (n - i + 1) && j == n)
                printf("-");              
        }
        printf("\n");
    }

}

int main()
{
    int n;
    scanf("%d", &n);
    cruz(n);
    return 0;
}