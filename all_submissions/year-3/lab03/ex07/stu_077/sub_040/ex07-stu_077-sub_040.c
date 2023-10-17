
#include <stdio.h>

#define TRUE 1
#define FALSE 0

int operation(int num, int op, int sum)
{
    if (op)
        sum += num;
    else
        sum -= num;
    return sum;
}

int main()
{
    int num = 0, digit, sum = 0, op = TRUE;
    while ((digit = getchar()) != EOF)
    {
        if (digit != ' ' && digit != '\n' && digit != '+' && digit != '-')
        {
            num = 10 * num + digit - '0';
        }
        if (digit == '+')
        {
            sum = operation(num, op, sum);
            op = TRUE;
            num  = 0;
        }
        else if (digit == '-')
        {
            sum = operation(num, op, sum);
            op = FALSE;
            num = 0;
        }
        if (digit == '\n')
            break;
    }
    sum = operation(num, op, sum);
    printf ("%d\n", sum);
    return 0;
}