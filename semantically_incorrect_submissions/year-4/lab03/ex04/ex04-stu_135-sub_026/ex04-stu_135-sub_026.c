
#include <stdio.h>

#define DENTRO 1
#define FORA 0

int main()
{
    int c;
    int estado = FORA, conta_zeros = 0;

    

    while ((c = getchar()) != EOF)
    {   
        if (c == '0' && estado == FORA) {
            conta_zeros++;
            continue;
        }

        if (c != ' ' && c != '\n' && c != '0') {
            estado = DENTRO;
            conta_zeros = 0;
        }
        if (c != '0' && conta_zeros > 0){
            conta_zeros = 0;
            printf("0 ");
            continue;
        }

        if (c == ' ') {
            estado = FORA;
            conta_zeros = 0;
            putchar(c);
        }
        if (estado == DENTRO)
            putchar(c);
    }
    
    return 0;
}