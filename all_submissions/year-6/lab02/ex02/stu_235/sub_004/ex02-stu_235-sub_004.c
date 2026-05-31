

#include <stdio.h>

int main ()
{
    int x, y, extra;
    scanf("%d %d", &x, &y);
    if (y < x)
    {
        extra = y;
        y = x;
        x = extra;
    }
    printf("%d\n%d\n",x,y);
    return 0;
}