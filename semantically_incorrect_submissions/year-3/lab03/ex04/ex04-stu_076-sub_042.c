
#include <stdio.h>

#define FORA 0
#define DENTRO 1
#define NAO 0
#define SIM 1

int main()
{
    int estado = FORA, c, inicio = SIM;
    char last = ' ';

    while ((c = getchar()) != EOF)
    {
        if ((c != '0' && c != ' ' && c != '\n' && estado == FORA) || (estado == DENTRO && c != ' ' && c != '\n'))
        {
            if (inicio == SIM)
            {
                inicio = NAO;
            }
            else if (estado == FORA)
            {
                putchar(' ');
            }
            estado = DENTRO;
            putchar(c);
        }
        else if (c == ' ' || c == '\n')
        {
            if (inicio == SIM && last != '0')
            {
                inicio = NAO;
            }
            else if (estado == FORA && last == '0')
            {
                if (c == '\n')
                {
                    printf("\n0");
                }
                else
                {
                    printf(" 0");
                }
            }
            else if (estado == DENTRO)
            {
                estado = FORA;
                if (c == '\n')
                {
                    inicio = SIM;
                }
            }
        }
        last = c;
    }

    printf("\n");

    return 0;
}
