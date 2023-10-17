
#include <stdio.h>

int main()
{
    int num1, num2, num3, a, b, c;

    scanf("%d%d%d", &num1, &num2, &num3);

    a = num1 < num2 ? num1 : num2;
    a = a < num3 ? a : num3;

    if (a == num1)
    {
        b = num2 < num3 ? num2 : num3;
        c = num2 > num3 ? num2 : num3;
    }
    else if (a == num2)
    {
        b = num1 < num3 ? num1 : num3;
        c = num1 > num3 ? num1 : num3;
    }
    else
    {
        b = num1 < num2 ? num1 : num2;
        c = num1 > num2 ? num1 : num2;
    }

    printf("%d %d %d\n", a, b, c);

    return 0;
}
