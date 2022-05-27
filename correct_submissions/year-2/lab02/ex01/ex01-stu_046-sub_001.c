#include <stdio.h>

int x, y, z, w;

int main()
{
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);

    if(x >= y && x >= z)
        printf("%d\n", x);
    
    else if(y >= z)
        printf("%d\n", y);

    else
        printf("%d\n", z);

    return 0;
}

