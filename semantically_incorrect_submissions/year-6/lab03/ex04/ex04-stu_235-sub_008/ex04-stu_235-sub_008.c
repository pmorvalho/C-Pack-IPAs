#include <stdio.h>

#define ESPACO 0
#define VALIDO 1
#define INVALIDO 2

int main ()
{
    char c;
    int estado,i;
    c = getchar();
    if (c == ' ')
        estado = ESPACO;
    else if (c == '0')
        estado = INVALIDO;
    else
        estado = VALIDO;

    while (c!=EOF)
    {
        if (estado == VALIDO)
            {
                printf("%c", c);
                c = getchar();
                if (c == ' ')
                    estado = ESPACO;
                else
                    estado = VALIDO;
            }
        else 
        {
          if(estado == INVALIDO)
          {
            i=0;
            while (c == '0')
            {
                i++;
                c = getchar();
            }
            if (i!= 0 && c == ' ')
            {
                printf(" 0");
                estado = ESPACO;
            }
            else if (c == 0 &&  c== ' ')
                {
                    printf(" ");
                    estado = ESPACO;
                    c = getchar();
                    if (c == '0')
                        estado = INVALIDO;
                    else if (c == ' ')
                        estado = ESPACO;
                    else
                        estado = VALIDO;
                }
            else 
            {
                printf("%c", c);
                c = getchar();
                if (c ==' ')
                    estado = ESPACO;
                else
                    estado = VALIDO;
            }

          }
          else
            {
                printf(" ");
                c = getchar();
                if (c == '0')
                    estado = INVALIDO;
                else if (c == ' ')
                    estado = ESPACO;
                else
                    estado = VALIDO;
            }
        }
    }
    printf("\n");
    return 0;
}