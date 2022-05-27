#include <stdio.h>



int main()
{
    int x, y, z, max;
    printf("Introduza tres inteiros:\n");
    scanf("%d%d%d", &x, &y, &z);
    max = x;
    if (y > max)
        max = y;
    if (z > max)
        max = z;
    printf("%d\n", max);
    
    return 0;
}
