
#include <stdio.h>

int main()
{
    int num1, num2, num3;

    scanf("%d %d %d", &num1, &num2, &num3);

    int maior = num1;

    if (num1 == num2)
    {
        maior = num2;
    }
    if (num2 > num1)
    {
        maior = num2;
    }
    if (num3 > num2)
    {
        maior = num3;
    }
    printf("%d\n", maior);

    return 0;
}