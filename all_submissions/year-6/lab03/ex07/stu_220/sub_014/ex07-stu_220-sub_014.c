
#include <stdio.h>

#define INICIAL 0
#define MAIS 1
#define MENOS 2

int main()
{
    int c = 0, num1 = 0, num2 = 0;
    int estado = INICIAL;

    while ((c = getchar()) != '\n')
    {
        if (c <= '9' && c >= '0')
        {
            if (estado == INICIAL)
                num1 = num1 * 10 + (c - '0');
            else
                num2 = num2 * 10 + (c - '0');
        }
        else if (c == ' ')
        {
            if (estado == MAIS)
                num1 += num2;
            else if (estado == MENOS)
                num1 -= num2;
            num2 = 0;
            estado = (c = getchar()) == '+' ? MAIS : MENOS;
            getchar();
        }
    }

    if (estado == MAIS)
        printf("%d\n", num1 + num2);
    else if (estado == MENOS)
        printf("%d\n", num1 - num2);
    else
        printf("%d\n", num1);

    return 0;
}