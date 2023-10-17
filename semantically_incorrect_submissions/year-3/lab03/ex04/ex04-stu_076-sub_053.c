
#include <stdio.h>

#define FORA 0
#define DENTRO 1

int main()
{
    int estado = FORA, c;
    char last = ' ';

    while ((c = getchar()) != EOF)
    {
        if ((c != '0' && c != ' ' && c != '\n' && estado == FORA) || (estado == DENTRO && c != ' ' && c != '\n'))
        {
            estado = DENTRO;
            putchar(c);
        }
        else if (c == ' ' || c == '\n')
        {
            if (estado == FORA && last == '0')
            {
                printf("0 ");
            }
            else if (estado == DENTRO)
            {
                putchar(' ');
                estado = FORA;
            }
        }
        last = c;
    }

    printf("\n");

    return 0;
}
