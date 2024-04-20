
#include <stdio.h>

int main()
{
    int num1, num2, num3, max;

    scanf("%d%d%d", &num1, &num2, &num3);

    max = num1 > num2 ? num1 : num2;
    max = num3 > max ? num3 : max;

    printf("%d\n", max);

    return 0;
}
