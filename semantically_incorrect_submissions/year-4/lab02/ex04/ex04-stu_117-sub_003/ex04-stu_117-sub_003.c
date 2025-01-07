
#include <stdio.h>

int main()
{
    int num1, num2, num3, aux;
    scanf("%d%d%d", &num1, &num2, &num3);
    if (num1 > num2) {
        aux = num1;
        num1 = num2;
        num2 = aux;
    }
    if (num3 < num1)
        printf("%d %d %d", num3, num1, num2);
    else if (num3 < num2)
        printf("%d %d %d", num1, num3, num2);
    else
        printf("%d %d %d", num1, num2, num3);
    return 0;
}