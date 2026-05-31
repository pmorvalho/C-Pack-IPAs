

#include <stdio.h>

void cruz (int n)
{
    int i, j;

    for (i = 1; i <= n; i++) 
    {
        for (j = 1; j <= n; j++)
        {
            if (j == i || j == n - i + 1)
                printf("* ");
            
            else
                printf("- ");
        }

        printf("\n");
    }

    return;
}

int main() 
{
    int num;

    scanf("%d", &num);
    cruz(num);
    
    return 0;
}