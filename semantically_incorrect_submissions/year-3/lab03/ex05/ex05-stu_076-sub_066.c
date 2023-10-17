
#include <stdio.h>

#define DENTRO 1
#define FORA 0
#define TRUE 1
#define FALSE 0

int main()
{
    int estado = FORA, c, backslash = FALSE;
    char last = ' ';

    while ((c = getchar()) != EOF)
    {
        if (estado == FORA && c == '"')
        {
            estado = DENTRO;
        }
        else if (estado == DENTRO)
        {
            if (c == '"')
            {
                if (last == '\\')
                {
                    putchar('"');
                }
                else
                {
                    estado = FORA;
                    putchar('\n');
                }
            }
            else if (c == '\\')
            {
                if (last == '\\')
                {
                    putchar('\\');
                    backslash = TRUE;
                }
            }
            else
            {
                putchar(c);
            }
        }
        
        if (backslash == TRUE)
        {
            last = ' ';
        }
        else
        {
            last = c;
        }
    }

    putchar('\n');

    return 0;
}
