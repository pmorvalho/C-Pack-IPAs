#include <stdio.h>



int main()
{
    int x, y, z;
    printf("Introduza tres inteiros:\n");
    scanf("%d\n%d\n%d", &x, &y, &z);
    max = x;
    if (y > max)
        max = y;
    if (z > max)
        max = z;
    printf("%d", &max);
    
    return 0;
}
