

#include <stdio.h>

#define FORA 0
#define DENTRO 1

int main() {
    long c, prev_c = '0';
    int estado = FORA;

    while ((c = getchar()) != EOF) {
        if ( c == '\n' || c == ' ')
        {           
            estado = FORA;
            
        } else if ( estado == FORA)
        {
            estado = DENTRO;
        }

        if (estado == DENTRO)
            if (prev_c != '0' || c!= '0')
                putchar(c); 
                  
        prev_c = c;
    }
    
    return 0;
}