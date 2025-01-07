
#include <stdio.h>

int main()
{
    int x, y, z, result;
    scanf("%d %d %d", &x, &y, &z);
    if (x > y)
    {
        result = x;
    }
    else
    {
        result = y;
    }
    if (result < z)
        result = z;
    printf("%d\n", result);
    return 0;
}