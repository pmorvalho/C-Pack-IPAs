

#include <stdio.h>

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);
    if (a <= b)
    {
        printf("%d\n", a);
        printf("%d\n", b);
    }
    else
    {
        printf("%d\n", b);
        printf("%d\n", a);
    }
}
