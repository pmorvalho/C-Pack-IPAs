

#include <stdio.h>
#define DENTRO 1
#define FORA 0

int main(){

    int c, estado;
    estado = FORA;

    while((c = getchar()) != EOF){

        if (c == '\"' && estado == FORA)
            estado = DENTRO;
            
        else if (c == '\"' && estado == DENTRO)
            estado == FORA;

        else if (estado == DENTRO)
            putchar(c);
        
    }

    return 0;
}