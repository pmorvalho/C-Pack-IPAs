

#include <stdio.h>

#define FORA 0
#define DENTRO 1

int main()
{
    int valor = 0, c, num, estado = FORA;
    char op = '+';

    while ((c = getchar()) != '\n')
    {
        if (estado == FORA){
            if (c <= '9' && c >= '0') {
                estado = DENTRO;
                num = c - '0';
            }
            else if (c == '+')
                op = '+';
            else if (c == '-')
                op = '-';
        } 
        else if (estado == DENTRO) {
            if (c <= '9' && c >= '0') {
                num = num * 10 + (c - '0'); 
            }
            else if (c == ' ') {
                estado = FORA;
                valor = (op == '+') ? valor + num : valor - num;
                num = 0;
            }
        }
    }
    if (estado == DENTRO) {
        valor = (op == '+') ? valor + num : valor - num;
    }
    printf("%d\n", valor);
    
    return 0;
}
