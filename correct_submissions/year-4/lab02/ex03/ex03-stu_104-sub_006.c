

#include <stdio.h>

int main()
{
    int num1, num2;

    if (scanf("%d%d", &num1, &num2) != 2)
    {
        return 2;
    }

    if (num1 % num2 == 0)
    {
        printf("yes\n");
    }
    else
    {
        printf("no\n");
    }

    return 0;
}