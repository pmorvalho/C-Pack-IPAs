

#include <stdio.h>

#define FORA 0
#define DENTRO 1
#define BARRA 2

int main ()
{
    int c, estado = FORA;

    while ((c = getchar()) != EOF)
    {
        if ((estado == FORA) && (c == '"'))
                estado = DENTRO;
        
        else if (estado == DENTRO)
            {
                if (c == '\\')
                    estado = BARRA;
                
                else if (c == '"')
                {
                    estado = FORA;
                    printf("\n");
                }
                
                else
                    putchar(c);
            }

        else if (estado == BARRA)
        {
            if (c == '\\')
                printf("\\");
            else if (c == '"')
                printf("\"");
            else
            {
                printf("\\");
                putchar(c);
            }

            estado = DENTRO;
        }
    }
    return 0;
}