#include <stdio.h>

#define DENTRO 0
#define FORA 1

int main()
{
    char c;
    int estado = FORA;
    
    while((c = getchar()) != EOF)
    {
        if(c == '\\')
        {
            if((c = getchar()) == '\\')
                putchar('\\');
            else if(c == '"')
                putchar('"');
        }
        
        else if(c == '"')
        {
            if(estado == FORA)
                estado = DENTRO;

            else if(estado == DENTRO)
            {
                estado = FORA;
                putchar('\n');
            }            
        }

        else
            putchar(c);

    }

    return 0;
}