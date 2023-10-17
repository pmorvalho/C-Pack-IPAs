
#include <stdio.h>

#define ZERO '0'

int main()
{
    int c, dig, op = '+';
    int numero = 0,op_total = 0, eh_numero = 0;

    while ((c = getchar()) != '\n') {
        if (c >= '0' && c <= '9') {
            dig = c - ZERO;
            if (eh_numero == 0) {
                numero += dig;
                eh_numero = 1;
            } else if (eh_numero == 1) {
                numero = numero * 10 + dig;
            }
        } else if (c == ' ') {
            if (op == '+')
                op_total += numero;
            else
                op_total -= numero;
            
            op = getchar();
            getchar(); 


            numero = 0;
            eh_numero = 0;
        }
    }

    if (op == '+')
        op_total += numero;
    else
        op_total -= numero;

    printf("%d", op_total);

    return 0;
}
