

#include <stdio.h>
#define DENTRO 1
#define FORA 0

int main(){

    int c, estado, anterior;
    estado = FORA;

    while((c = getchar()) != EOF){

        if ( c == '\"')
            putchar(c);

        else if (c == '"' && estado == FORA)
            estado = DENTRO;
            
        else if (c == '"' && estado == DENTRO)
            estado = FORA;

        else if (estado == DENTRO)
            putchar(c);
        
    }
    putchar('\n');

    return 0;
}