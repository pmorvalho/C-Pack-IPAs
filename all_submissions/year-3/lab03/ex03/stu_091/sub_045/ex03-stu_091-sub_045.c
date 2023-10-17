
#include <stdio.h>

int main()
{
    int s,coluna = 1 ,linha = 1, conta1 = 1,conta2;
    scanf("%d",&s);

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
            printf(" ");
            if (linha == s)
            {
                printf("\n");
            }
            linha ++;
        }
        coluna++;
        linha = 1;
        conta1++;
        conta2--;
    }
    return 0;
}