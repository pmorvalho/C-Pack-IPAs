
#include <stdio.h>

int numero()
{
    int n, numero = 0;
    while((n = getchar()) != ' ' && n != '\n')
            numero = numero * 10 + n -'0';
    
    return numero;
}

int main()
{
    int c, numero2, operador, resultado;
    resultado = numero();

    while((c = getchar()) != '\n')
    {
        operador = c;
        getchar();

        if(operador == '+')
        {
            numero2 = 0;
            while((c = getchar()) != ' ' && c != '\n')
                numero2 = numero2 * 10 + c -'0';
            resultado += numero2;
        }

        else
        {
            numero2 = 0;
            while((c = getchar()) != ' ' && c != '\n')
                numero2 = numero2 * 10 + c -'0';
            resultado -= numero2;
        }
        if(c == '\n')
            break; 
    }

    printf("%d\n", resultado);

    return 0;
}
