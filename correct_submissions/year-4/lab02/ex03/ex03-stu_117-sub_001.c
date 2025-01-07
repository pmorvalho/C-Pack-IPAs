
#include <stdio.h>

int main()
{
    int num, divisor;
    scanf("%d%d", &num, &divisor);
    num % divisor == 0 ? printf("yes\n") : printf("no\n");
    return 0;
}