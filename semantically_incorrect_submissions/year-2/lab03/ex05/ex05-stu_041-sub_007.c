#include <stdio.h>






#define FORA 0
#define DENTRO 1
#define ESC 2




int main()
{
    int estado, c;
    estado = FORA;
    while ((c = getchar()) != EOF)
    {
        if (c == '"')
        {
            if (estado == FORA)
                estado = DENTRO;
            else if (estado == DENTRO)
                estado = FORA;
            else
            {
                estado = DENTRO;
                putchar(c);
            }
        }
        else if (c == '\\' && estado != ESC)
        {
            estado = ESC;
        }
        else
        {
            estado = DENTRO;
            putchar(c);
        }
    }
    return 0;
}
