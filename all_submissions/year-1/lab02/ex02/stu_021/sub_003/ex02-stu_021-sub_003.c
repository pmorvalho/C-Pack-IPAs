#include <stdio.h>



int main()
{
    int m, n;
    scanf("%d", &n);
    scanf("%d", &m);
    if (n > m)
    {
        printf( "%d\n", m);
        printf( "%d\n", n);
    }
    else
    {
        printf( "%d\n", n);
        printf( "%d\n", m);
    }
    return 0;
}