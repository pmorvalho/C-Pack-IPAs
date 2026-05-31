
#include <stdio.h>

int main()
{
    int a, b;
    if (scanf("%d%d", &a, &b) != 2) return 2;
    if (a < b) printf("%d\n", a); else printf("%d\n", b);
    printf("%d\n", a > b ? a : b);
    return 0;
}