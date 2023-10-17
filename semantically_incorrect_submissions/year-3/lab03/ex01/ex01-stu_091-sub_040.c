

#include <stdio.h>

int main()
{
    int s , linha, colona, conta1 = 1, conta2 = 1;
    scanf("%d",&s);

    linha = s;
    colona = s;

    while (conta1 <= colona)
    {
        while (conta2 <= linha)
        {
            printf("%d\t",conta2);
            conta2 ++;
        }
        printf("\n");
        conta1 ++;
        linha ++;
        conta2 = conta1;
    }
    return 0;
}