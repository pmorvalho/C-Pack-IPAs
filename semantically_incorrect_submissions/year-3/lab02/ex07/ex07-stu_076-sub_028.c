
#include <stdio.h>

int main()
{
    int num1, primos, i;

    scanf("%d", &num1);
    primos = 0;

    for (i = num1 / 2; i > 0; i--)
    {
        if (num1 % i == 0)
        {
            primos++;
        }
    }

    printf("%d\n", primos);

    return 0;
}
