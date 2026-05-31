

#include <stdio.h>

#define FORA 0
#define DENTRO 1
#define ZERO 2

int main ()
{
    int c, estado = FORA;

    while ((c = getchar()) != EOF)
    {
        if (c == '0' && estado == FORA)
            estado = ZERO;

        else if (c >= '1' && c <= '9' && (estado == FORA || estado == ZERO))
        {
            putchar(c);
            estado = DENTRO;
        }

        else if (c == ' ' && estado == DENTRO)
        {
            estado = FORA;
            printf(" ");
        }

        else if (c != ' ' && estado == DENTRO)
            putchar(c);

        else if (c == '0' && estado == DENTRO)
            estado = ZERO;
        
        else if (c == ' ' && estado == ZERO)
        {
            printf("0 ");
            estado = FORA;
        }
    }
    
    return 0;
}