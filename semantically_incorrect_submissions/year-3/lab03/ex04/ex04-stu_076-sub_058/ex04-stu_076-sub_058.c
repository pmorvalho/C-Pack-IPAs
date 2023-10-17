
#include <stdio.h>

#define FORA 0
#define DENTRO 1
#define NAO 0
#define SIM 1

int main()
{
    int estado = FORA, c, inicio = SIM, last = ' ';

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
        else if (c == '\n')
        {
            putchar('\n');
            estado = FORA;
            inicio = SIM;
        }
        else if (c == ' ' && inicio == NAO)
        {
            if (estado == FORA && last == '0')
            {
                printf(" 0");
            }
            else if (estado == DENTRO)
            {
                estado = FORA;
            }
        }
        last = c;
    }

    putchar('\n');

    return 0;
}
