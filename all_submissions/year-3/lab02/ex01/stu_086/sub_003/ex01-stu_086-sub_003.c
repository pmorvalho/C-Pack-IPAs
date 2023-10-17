

#include <stdio.h>

int main()
{
    int x, y, z, vm;

    printf("Introduz 3 números inteiros: \n");
    scanf("%d%d%d", &x, &y, &z);
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
    printf("O valor maior é %d\n", vm);
    return 0;
}