#include <stdio.h>

int main()
{
    int n,contador=0,iteracao=1;
    scanf("%d",&n);

    while (iteracao <= n)
    {
        if ((n % iteracao) == 0)
        {
            contador ++;
            iteracao ++;
        }
        else
        {
           iteracao ++;
        }
    }
    printf("%d\n",contador);
    return 0;
}