

#include <stdio.h>
#define ESPACO 0
#define INVALIDO 1
#define VALIDO 2

int main ()
{
    int estado;
    char c;
    c = getchar();
    
    if (c == '0' || c == EOF)
        estado = INVALIDO;
    else if (c == ' ')
        estado = ESPACO;
    else
        estado = VALIDO;

    while (c != EOF)
    {

        if (estado == ESPACO || estado == VALIDO)
        {
            printf("%c", c);
            c = getchar ();

            if (estado == ESPACO)
            {

                if (c == '0')
                    estado = INVALIDO;
                else if(c == ' ')
                    estado = ESPACO;
                else
                    estado = VALIDO;
            }
            else
                if (c != ' ')
                    estado = VALIDO;
                else 
                    estado = ESPACO;
                
        }
        else if (estado == INVALIDO)
        {
            c = getchar();
            if (c == '0')
                estado = INVALIDO;
            else if (c == ' ')
                estado = ESPACO;
            else                  
                    estado = VALIDO;
        }   
    }

    return 0;
}