
#include <stdio.h>

#define OUTSIDE 0
#define MENSAGEM 1

int main()
{
    int c, estado = OUTSIDE;
    int escape = 0;

    while ((c = getchar()) != EOF)
    {
        if (estado == OUTSIDE)
        {
            if (c == '"' && !escape)
            {
                estado = MENSAGEM;
            }
        }
        else if (estado == MENSAGEM)
        {
            if (c == '"' && !escape)
            {
                printf("\n");
                estado = OUTSIDE;
            }
            else if (c != '\\' || (c == '\\' && escape))
            {
                putchar(c);
            }
        }

        escape = (c == '\\' && !escape) ? 1 : (c == '\\' && escape) ? 0
                                                                    : 0;
    }

    return 0;
}