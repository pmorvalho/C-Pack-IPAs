#include <stdio.h>

int main()
{
    int x, y, z;
    printf("Introduza três inteiros.\n");
    scanf("%d\n%d\n%d", &x, &y, &z);
    if(x > y && x > z)
        printf("O maior dos três números é: %d\n", x);    
    else if(y > z)
        printf("O maior dos três números é: %d\n", y);
    else
        printf("O maior dos três números é: %d\n", z);
    return 0;
}