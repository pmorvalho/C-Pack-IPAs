
#include <stdio.h>

int main()
{
    int s,coluna = 1,linha = 1, espaca = 0,conta1 = 1,var;
    scanf("%d",&s);
    var = s*2 - 2;

    while (coluna <= s)
    {
        while (espaca != var)
        {
            printf(" ");
            espaca ++;
        }
        while (conta1 <= linha)
        {
            printf("%d",conta1);
            if (conta1 < linha)
            {
                printf(" ");
            }
            conta1 ++;
        }
        conta1 --;
        while (--conta1 >= 1)
        {
            printf(" %d",conta1);
        }
        printf("\n");
        conta1 = 1;
        coluna ++;
        espaca = 0;
        var -= 2;
        linha ++;
    }
    return 0;
}