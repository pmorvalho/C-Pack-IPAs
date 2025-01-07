

#include <stdio.h>

int main()
{
    int num1, num2;

    if (scanf("%d%d", &num1, &num2) != 2)
    {
        return 2;
    }

    if (num1 > num2)
    {
        printf("%d\n%d\n", num2, num1);
    }
    else
    {
        printf("%d\n%d\n", num1, num2);
    }

    return 0;
}