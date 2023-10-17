



#include <stdio.h>

void quadrado(int s)
{
    int linha, colona, conta1 = 1, conta2 = 1;

    linha = s;
    colona = s;

    while (conta1 <= colona)
    {
        while (conta2 <= linha)
        {
            if (conta2 == linha)
                printf("%d\n",conta2);
            else
                printf("%d\t",conta2);
            conta2 ++;
        }
        conta1 ++;
        linha ++;
        conta2 = conta1;
    }
}

int main()
{
    int s ;

    scanf("%d",&s);
    quadrado(s);

    return 0;
}