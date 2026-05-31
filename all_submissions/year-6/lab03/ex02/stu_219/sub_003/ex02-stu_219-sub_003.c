

#include <stdio.h>

void piramide (int n)
{
    int i, j;

    if (n >= 2)
    {
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= n - i; j++)
                printf("  ");

            for (j = 1; j < i; j++)
                printf("%d ", j);

            printf("%d", i);

            if (i != 1)
                printf(" ");

            for (j = i; j > 1; j--)
            {
                printf("%d", j - 1);

                if (j != 2)
                    printf(" ");
            }

            printf("\n");
        }
    }
    return;
}

int main() 
{
    int num;

    scanf("%d", &num);
    piramide(num);
    
    return 0;
}