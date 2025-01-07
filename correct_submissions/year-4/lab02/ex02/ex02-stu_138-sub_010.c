
#include <stdio.h>
int smallest (int a, int b)
{
    if (a > b)
        printf("%d\n%d\n", b, a);
    else
        printf("%d\n%d\n", a, b);
    return 0;
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    smallest(a, b);
    return 0;
}