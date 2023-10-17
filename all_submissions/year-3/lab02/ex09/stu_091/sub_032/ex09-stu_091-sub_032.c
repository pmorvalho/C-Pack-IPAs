
#include <stdio.h>

int main()
{
    int X, valor1, valor2,valor3,valor4;
    float seg = 0 , min = 0 , hora = 0 ;
    scanf("%d", &X);

    if (X < 60)
    {
        seg = X ;
    }
    if (X >= 60)
    {
        valor1 = X % 60;
        valor2 = X / 60;
        if (valor1 == 0 && valor2 < 60)
        {
            min = valor2;
        }
        if (valor2 >= 60)
        {
            valor3 = valor2 / 60;
            valor4 = valor2 % 60;
            if (valor4 == 0)
            {
                hora = valor3;
            }
            if (valor4 != 0)
            {
                seg = valor1;
                min = valor4;
                hora =  (valor2 - valor4)/60;
            }
        }
    }
    printf("%02.0f:%02.0f:%02.0f\n",hora,min,seg);
    return 0;
}