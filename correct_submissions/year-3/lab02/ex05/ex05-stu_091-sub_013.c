
#include <stdio.h>

int main()
{
    int X , contador = 1;
    scanf("%d",&X);

    while (contador <= X)
    {
        printf("%d\n",contador);
        contador++;
    }
    return 0;
}