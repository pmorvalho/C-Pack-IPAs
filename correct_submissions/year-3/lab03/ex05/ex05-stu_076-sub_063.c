
#include <stdio.h>

#define DENTRO 1
#define FORA 0
#define TRUE 1
#define FALSE 0

int main()
{
    int estado = FORA, c, backslash = FALSE;

    while ((c = getchar()) != EOF)
    {
        if (estado == FORA)
        {
            if (c == '\\' && backslash == TRUE)
            {
                backslash = FALSE;
            }
            else if (c == '\\')
            {
                backslash = TRUE;
            }
            else if (c == '"' && backslash == FALSE)
            {
                estado = DENTRO;
            }
        }
        else if (estado == DENTRO)
        {
            if (c == '"')
            {
                if (backslash == TRUE)
                {
                    putchar('"');
                    backslash = FALSE;
                }
                else
                {
                    estado = FORA;
                    putchar('\n');
                }
            }
            else if (c == '\\')
            {
                if (backslash == TRUE)
                {
                    putchar('\\');
                    backslash = FALSE;
                }
                else
                {
                    backslash = TRUE;
                }
            }
            else
            {
                putchar(c);
            }
        }
    }

    return 0;
}
