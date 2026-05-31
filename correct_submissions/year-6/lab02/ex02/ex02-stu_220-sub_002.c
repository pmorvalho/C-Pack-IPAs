
#include <stdio.h>

int main()
{
    int a = 0, b = 0;
    scanf("%d %d", &a, &b);
    if (a > b)
    {
        printf("%d\n", b);
        printf("%d\n", a);
    }
    else
    {
        printf("%d\n", a);
        printf("%d\n", b);
    }

    return 0;
}