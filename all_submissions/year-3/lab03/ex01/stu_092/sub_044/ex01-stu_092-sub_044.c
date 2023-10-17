
#include <stdio.h>



int main()
{
    int i, j, n;
    scanf("%d", &n);
    if (n < 2)
        scanf("%d", &n);
    else
    {
        

            int tabela[n][n];
            for (i = 0; i < n; i++)
            {
                for (j = 0; j < n; j++)
                {
                    tabela[i][j] = i+j+1;
                }
            }    
            for (i = 0; i < n; i++)
            {
                for (j = 0; j < n; j++)
                {
                    printf("%d\t", tabela[i][j]);
                }
                printf("\n");
            }
            
    }
    return 0;
}
