
#include <stdio.h>

#define FORA 0
#define DENTRO 1
int main()
{
    char c;
    int estado = FORA;

    while( (c = getchar()) != EOF)
    {   
        if (c == ' ' || c == '\n' || c == '\t')
        {
            estado = FORA;
        }

        else if (estado == FORA) 
        {
            estado = DENTRO;
        }

        else if ((estado == DENTRO) && c =='0')
        {

        }


    }
    putchar('\n');
    return 0;
}