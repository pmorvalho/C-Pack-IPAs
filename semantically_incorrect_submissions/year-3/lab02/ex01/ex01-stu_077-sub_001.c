
#include <stdio.h>

int main()
{
    int max;
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    max = a;
    if (b > max)
        max = b;
    if (c > max)
        max = c;
    printf("%d", max);
    return 0;   
}