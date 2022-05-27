#include <stdio.h>

int main()
{
    int x, y, z;
    printf("Introduza três inteiros.\n");
    scanf("%d\n%d\n%d", &x, &y, &z);
    if(x > y && x > z)
        printf("%d", x);    
    else if(y > z)
        printf("%d", y);
    else
        printf("%d", z);
    return 0;
}