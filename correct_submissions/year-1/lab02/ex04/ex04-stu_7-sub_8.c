#include <stdio.h>



int main()
{
    int x, y, z;

    scanf("%d %d %d", &x, &y, &z);

    if ( (x <= y) && (x <= z) )
    {
        if ( y <= z )
            printf("%d %d %d\n", x, y, z);
        else
            printf("%d %d %d\n", x, z, y);
    }
    else if ( (y <= x) && (y <= z) )
    {
        if (x <= z)
            printf("%d %d %d\n", y, x, z);
        else
            printf("%d %d %d\n", y, z, x);
    }
    else
    {
        if (x <= y)
            printf("%d %d %d\n", z, x, y);
        else
            printf("%d %d %d\n", z, y, x);
    }
    
    return 0;
}
