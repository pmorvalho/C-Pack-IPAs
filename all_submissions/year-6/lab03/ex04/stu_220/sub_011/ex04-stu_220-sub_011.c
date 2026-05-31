
#include <stdio.h>

#define FORA 0
#define ZERO 1
#define DENTRO 2

int main()
{
    int c = 0, estado = FORA;

    while ((c = getchar()) != EOF)
    {
        if (c == '0' && estado != DENTRO)
        {
            estado = ZERO;
            continue;
        }
        else if ((c == ' ' || c == '\n'))
        {
            if (estado == ZERO)
                putchar('0');
            estado = FORA;
        }
        else if (c >= '1' && c <= '9')
        {
            estado = DENTRO;
        }
        putchar(c);
    }

    return 0;
}