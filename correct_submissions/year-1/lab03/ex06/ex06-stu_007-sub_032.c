#include <stdio.h>

int main()
{
    int sum_digits, dig;

    sum_digits = 0;
    while ((dig = getchar()) != EOF)
    {
        if (dig >= '0' && dig <= '9')
            sum_digits = sum_digits + (dig - '0');
    }
    if ((sum_digits % 9) == 0)
        printf("yes\n");
    else
        printf("no\n");

    return 0;
}
