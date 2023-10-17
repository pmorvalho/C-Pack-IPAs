
#include <stdio.h>

void cruz(int s)
{
    int coluna = 1 ,linha = 1, conta1 = 1,conta2;

    conta2 = s;

    while (coluna <= s)
    {
        while (linha <= s)
        {
            if (linha == conta1 || linha == conta2)
            {
                printf("*");
            }
            else
            {
                printf("-");
            }
            
            if (linha == s)
            {
                printf("\n");
            }
            else
            {
                printf(" ");
            }    
            linha ++;
        }
        coluna++;
        linha = 1;
        conta1++;
        conta2--;
    }
}

int main()
{
    int s;
    scanf("%d",&s);
    cruz(s);    
    return 0;
}