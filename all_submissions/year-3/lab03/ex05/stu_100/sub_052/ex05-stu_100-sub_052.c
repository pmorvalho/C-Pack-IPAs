

#include <stdio.h>

#define DENTRO 1
#define FORA 0

int main() {
    int prev_c = ' ', estado = FORA, c;

    while ((c = getchar()) != EOF)
    {
        if (c == '"' && prev_c != '\\')
        {
            if (estado)
                estado = FORA;
            else
                estado = DENTRO;        
        }

        if (estado)
        {
            if (prev_c == '\\' && c== '"') {
                putchar(c);
            } else if (prev_c == '\\' && c == '\\')
                putchar(c);
            else if (c != '"' && c !='\\')
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