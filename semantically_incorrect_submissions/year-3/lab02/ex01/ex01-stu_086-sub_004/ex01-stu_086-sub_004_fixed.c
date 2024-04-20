

#include <stdio.h>

int main()
{
    int x, y, z, vm;


    scanf("%d%d%d", &x, &y, &z);
    vm=x;
    if ((x > y) && (x > z))
    {
        vm = x;
    }
    if ((y > x) && (y > z))
    {
        vm = y;
    }
    if ((z > x) && (z > y))
    {
        vm = z;
    }
    printf("%d\n", vm);
    return 0;
}
