
#include <stdio.h>

int main()
{
    int X, contador = 0, total = 0,valor;
    scanf("%d",&X);

    while (X != 0)
    {
        contador ++;
        valor = X % 10;
        total += valor;
        X /= 10;
    }
    printf("%d\n%d\n",contador,total);
    return 0;
}