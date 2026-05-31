

#include <stdio.h>

void quadrado (int n)
{
    int i, j;

    if (n >=2)
    {
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= n;  j++)
            {
                printf("%d", i + j - 1);
                if (j != n)
                    printf("\t");
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
    quadrado(num);
    
    return 0;
}