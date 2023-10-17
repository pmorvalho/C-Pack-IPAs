
#include <stdio.h>

int main()
{
    int X, valor1, valor2,valor3;
    float seg = 0 , min = 0 , hora = 0 ;
    scanf("%d", &X);

    if (X % 60 != 0)
    {
        seg = X % 60;
    }
    valor1 = (X - seg);
    if (valor1 %60 != 0)
    {
        min = valor1 % 60;
    }
    else if (valor1 %60 == 0)
    {   
        valor3 = valor1;
        valor3 /= 60;
        if (valor3 < 60)
        {
            min = valor3;
        }
        else
        {
            min = valor3 -60;
        }
    }
    valor2 = valor1 % 3600;
    if (valor2 == 0)
    {
        hora = valor1 / 3600;
    }

    printf("%2.0f:%2.0f:%2.0f\n",hora,min,seg);
    return 0;
}