#include <stdio.h>

#define UNDEFINED 0
#define SUBTRACTION 1
#define SUM 2

int main()
{
    int c, operation, res, operand;
    
    operand = 0;
    res = 0;
    operation = UNDEFINED;
    while ((c = getchar()) != '\n')
    {
        if (c >= '0' && c <= '9')
            operand = operand * 10 + (c - '0');
        else if (c == '+')
            operation = SUM;
        else if (c == '-')
            operation = SUBTRACTION;
        else if (c == ' ' && operation == UNDEFINED)
        {    
            res = operand;
            operand = 0;
        }
        else if (c == ' ' && operand > 0)
        {
            if (operation == SUM)
            {
                res = res + operand;
                operand = 0;
            }
            else if (operation == SUBTRACTION)
            {    
                res = res - operand;
                operand = 0;
            }
        }
    }
    if (operation == SUBTRACTION)
        res = res - operand;
    else
        res = res + operand;
    printf("%d\n", res);

    return 0;
}
