
#include <stdio.h>

#define FORA 0
#define DENTRO 1

int main()
{
    int c = 0, estado = FORA;

    while ((c = getchar()) != EOF)
    {
        if (c == '"')
        {
            estado = (estado == FORA) ? DENTRO : FORA;
            if (estado == FORA)
                putchar('\n');
        }
        else if (c == '\\' && estado == DENTRO)
        {
            c = getchar();
            if (c == '\\' || c == '"')
                putchar(c);
            else
                putchar('\\');
        }
        else if (estado == DENTRO)
            putchar(c);
    }

    return 0;
}