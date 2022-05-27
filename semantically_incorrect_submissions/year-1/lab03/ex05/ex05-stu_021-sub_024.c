#include <stdio.h>

#define FORA 0
#define DENTRO 1
#define ESCAPE 2

int main ()
{
    int c, estado = FORA;
    
    while ((c = getchar()) != EOF)
    {
        if (c == '"' && estado == FORA)
            estado = DENTRO;
        else if (estado == DENTRO)
        {
            if (c == '"')
                estado = FORA;
            else if (c == '\\')
                estado = ESCAPE;
            else
                putchar(c);
        }
        else if (estado == ESCAPE)
        {
            estado = DENTRO;
            putchar(c);
        }
    }
    return 0;
}