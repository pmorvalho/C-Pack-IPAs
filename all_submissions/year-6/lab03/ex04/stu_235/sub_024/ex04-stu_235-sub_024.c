#include <stdio.h>

#define ESPACO 1
#define VALIDO 2
#define INVALIDO 3

int number_val(char c)
{
    if ('1'<= c && c<='9')
        return 1;
    else
        return 0;
}

int estado_c (int estado, char c)
{
    if (number_val(c) || (c == '0' && estado == VALIDO))
        estado = VALIDO;

    else if (c == ' ' || c == '\n')
        estado = ESPACO;

    else 
        estado = INVALIDO;
    return estado;
}

int main ()
{
    char c;
    int estado = 0;

    while ((c = getchar())!= EOF)
    {
        estado = estado_c(estado,c);
        if (estado == VALIDO)
            printf("%c", c);
        else if (estado == ESPACO)
            printf("%c", c);
        else
        {
            while(estado == INVALIDO)
            {
                c =  getchar();
                estado = estado_c(estado,c);
            }
            if (estado == ESPACO)
                printf("0%c", c);
            else 
                printf("%c", c);
        }
    }
    return 0;
}
