
#include <stdio.h>

int main()
{
    int a, b ,c, max;

    if (scanf("%d%d%d", &a,&b,&c)!=3) return 1;
    if (a >= b && a>=c ) {
        max = a;
    }
    if (b >= a && b>= c ) {
        max = b;
    }
    if (c >= a && c>= b ) {
        max = c;
    }
    printf("%d\n", max);
    return 0;
}