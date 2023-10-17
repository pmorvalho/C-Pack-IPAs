
#include <stdio.h>

#define FORA 0
#define DENTRO 1

int main()
{
    char c;
    int estado, positivo;
    
    while ((c = getchar()) != EOF){
        if (('1' <= c) && (c <= '9')){
            estado = DENTRO;
            positivo = DENTRO;
            putchar(c);
        }
        else if (c == '0'){
            if ((estado == DENTRO) && (positivo == DENTRO))
                putchar(c);
            else
                estado = DENTRO;
        }
        else if ((c == '\n') || (c == ' ')){
            if ((estado == DENTRO) && (positivo == FORA)){
                putchar('0');
                putchar(c);
                estado = FORA;
                positivo = FORA;
            }
            else{
                putchar(c);
                estado = FORA;
                positivo = FORA;
            }
        }
    }
    return 0;
}