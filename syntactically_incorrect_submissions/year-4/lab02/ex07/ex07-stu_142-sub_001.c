
#include <stdio.h>

int main()
{
    int x, divisor = 0;
    scanf("%d", &x);
    for (int i = x; i >= 1; i--)
    {
        if (x % i == 0)
            divisor++;
    }
    printf("%d\n", divisor);
    return 0;
}