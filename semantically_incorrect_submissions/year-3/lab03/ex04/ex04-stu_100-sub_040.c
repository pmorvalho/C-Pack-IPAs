

#include <stdio.h>

#define FORA 0
#define DENTRO 1

int main() {
    long c, prev_c = ' ';
    int estado = FORA;

    while ((c = getchar()) != EOF) {
        if ( c == '\n' || c == ' ')
        {
            if (prev_c == '0')
            {
                putchar('0');
            }
            
            estado = FORA;
            putchar(' ');
        } else if ( estado == FORA)
        {
            estado = DENTRO;
        }

        if (estado == DENTRO)
            if (c != '0')
                putchar(c);       
        prev_c = c;
    }
    printf("\n");

    return 0;
}