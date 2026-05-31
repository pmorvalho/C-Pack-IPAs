
#include <stdio.h>

int main()
{
    int a, b, c, m;
    if (scanf("%d%d%d", &a, &b, &c) != 3) return 2;
    m = a > b ? a: b;
    m = m > c ? m: c;
    printf("%d\n", m);
    return 0;
}