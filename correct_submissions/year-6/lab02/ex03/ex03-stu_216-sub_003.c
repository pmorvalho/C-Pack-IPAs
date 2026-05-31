
#include <stdio.h>

int main()
{
    int a, b;
    if (scanf("%d%d", &a, &b) != 2) return 2;
    printf(a % b == 0 ? "yes\n" : "no\n");
    return 0;
}