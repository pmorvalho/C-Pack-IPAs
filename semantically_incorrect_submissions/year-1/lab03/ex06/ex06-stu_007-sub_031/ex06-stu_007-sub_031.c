#include <stdio.h>

int main()
{
    int i, sum_digits, dig;

    for (i = 0; i < 100; ++i)
    {
        dig = getchar();
        sum_digits = sum_digits + (dig - '0');
    }

    if (sum_digits % 9 == 0)
        printf("yes");
    else
        printf("no");

    return 0;
}
