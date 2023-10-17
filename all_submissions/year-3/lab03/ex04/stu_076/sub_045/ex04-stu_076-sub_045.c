
#include <stdio.h>

#define FORA 0
#define DENTRO 1
#define NAO 0
#define SIM 1

int main()
{
    int estado = FORA, c, inicio = SIM, last = ' ', has_zero = NAO, loop = SIM;

    while (loop == SIM)
    {
        c = getchar();

        if (c == '0')
        {
            has_zero = SIM;
        }
        if ((c >= '1' && c <= '9' && estado == FORA) || (estado == DENTRO && c >= '0' && c <= '9'))
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
        else if (c == '\n' || c == EOF)
        {
            if (last == '0' && inicio == SIM)
            {
                putchar('0');
            }
            else if (last == '0' && estado == FORA)
            {
                printf(" 0");
            }
            else if (last == ' ' && inicio == SIM && has_zero == SIM)
            {
                putchar('0');
            }
            if (c == EOF)
            {
                break;
            }
            putchar('\n');
            estado = FORA;
            inicio = SIM;
            has_zero = NAO;
        }
        else if (c == ' ' && inicio == NAO)
        {
            if (estado == FORA && last == '0')
            {
                printf(" 0");
                has_zero = NAO;
            }
            else if (estado == DENTRO)
            {
                estado = FORA;
            }
        }
        else if (c == ' ' && inicio == SIM && last == '0')
        {
            putchar('0');
            inicio = NAO;
        }
        
        last = c;
    }
    
    return 0;
}
