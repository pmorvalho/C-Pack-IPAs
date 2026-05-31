
#include <stdio.h>

int main()
{
    int n, c;
    if (scanf("%d", &n) != 1) return 2;
    c = 1;
    while (c <= n)
    {
        printf("%d\n", c);
        c++;
    }
}