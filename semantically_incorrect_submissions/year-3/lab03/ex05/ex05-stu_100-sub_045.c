

#include <stdio.h>

#define DENTRO 1
#define FORA 0

int main()  {
    int prev_c = ' ', estado = FORA, c, backslash = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == '"' && prev_c != '\\')
        {
            if (estado)
                estado = FORA;
            else
                estado = DENTRO;        
        }
        if ( c == '\\')
            backslash ++;
        if (estado)
        {
            if (c != '"' && c != '\\') {
                putchar(c);
                backslash = 0;
            } else if ( c == '"' && prev_c == '\\' && backslash % 2 != 0)
            {
                putchar(c);
            } else if ( c == '\\' && prev_c == '\\' && backslash % 2 == 0)
            {
                putchar(c);
            }
        } else
            if ( c != '"')
                putchar('\n');
        
        prev_c = c;
    }
    return 0;
}