
#include <stdio.h>
#define NUMERO 1
#define CHAR 0

int main(){

    int c, estado, anterior;
    estado = CHAR;
    anterior = 0;

    while ((c = getchar()) != EOF)
    {
        if (( c >'0' && c <= '9') || ( c == '0' && estado == NUMERO)){
            putchar(c);
            estado = NUMERO;
        }
        else if (c == '\n' || c == ' ')
        {
            if (anterior == '0' && estado == CHAR)
                putchar(anterior);
            
            putchar(c);
            estado = CHAR;
        }
        anterior = c;
        
    }
    return 0;
}