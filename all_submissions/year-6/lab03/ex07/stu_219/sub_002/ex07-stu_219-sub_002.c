

#include <stdio.h>

#define OPERADOR 0
#define ACC 1

int main() 
{
    int c, acc = 0, total = 0, op, estado = ACC;

    while (((c = getchar()) != EOF) && (c != '\n'))
    {
        if (c >= '0' && c <= '9'  && estado == ACC)
            acc = acc * 10 + c - '0';

        else if ((c == '+' || c == '-') && estado == ACC)
        {
            if (op == '+')
            {
                total += acc;
                acc = 0;
            }

            else if (op == '-')
            {
                total -= acc;
                acc = 0;
            }

            else
            {
                total += acc;
                acc = 0;
            }

            estado = OPERADOR;
            op = c;
        }

        else if (c >= '0' && c <= '9'  && estado == OPERADOR)
            acc = acc * 10 + c - '0';

        else if ((c == '+' || c == '-') && estado == OPERADOR)
        {
            if (op == '+')
            {
                total = total + acc;
                acc = 0;
            }

            else if (op == '-')
            {
                total = total - acc;
                acc = 0;
            }

            else
            {
                total = total + acc;
                acc = 0;
            }

            estado = ACC;
            op = c;
        }
    }
    
    if (op == '+')
    {
        total = total + acc;
        acc = 0;
    }

    else if (op == '-')
    {
        total = total - acc;
        acc = 0;
    }

    else
    {
        total = total + acc;
        acc = 0;
    }

    printf("%d\n", total);
    return 0;
}