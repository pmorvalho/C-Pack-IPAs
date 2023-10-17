
#include <stdio.h>

int main()
{
    int max = 0;
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a > max)
        max = a;
    if (b > max)
        max = b;
    if (c > max)
        max = c;
    printf("%d", max);
    return 0;   
}