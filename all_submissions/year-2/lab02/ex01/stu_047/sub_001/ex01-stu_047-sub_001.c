#include <stdio.h>

int main()
{
    int x, y, z;
    printf("Introduza três inteiros.\n");
    scanf("%d%d%d", &x, &y, &z);
    if(x > y && x > z)
        printf("%d\n", x);    
    else if(y > z)
        printf("%d\n", y);
    else
        printf("%d\n", z);
    return 0;
}