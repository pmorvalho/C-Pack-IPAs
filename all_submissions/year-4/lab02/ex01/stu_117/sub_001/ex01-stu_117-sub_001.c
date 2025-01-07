
#include <stdio.h>

int main()
{
    int maior, num1, num2, num3;
    scanf("%d%d%d", &num1, &num2, &num3);
    maior = num1 > num2 ? num1 : num2;
    maior = num3 > maior ? num3 : maior;
    printf("%d", maior);
    return 0;
}