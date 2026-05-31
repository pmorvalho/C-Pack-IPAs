
#include <stdio.h>

#define FORA 0
#define DENTRO 1
int main()
{
    int estado = FORA;
    char c;

    while((c = getchar()) != EOF)
    {
        if( (c == '\"') && (estado == FORA))
        {
            estado = DENTRO;
        }
        else if( (c == '\"') && (estado == DENTRO))
        {
            estado = FORA;
            putchar('\n');
        }
        else if( estado == DENTRO)
        {
            putchar(c);
        }
        else
        {

        }
    }

    return 0;
}