
#include <stdio.h>
int smallest (int a, int b)
{
    if (a > b)
        printf("%d\n%d", b, a);
    else
        printf("%d\n%d", a, b);
    return 0;
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    smallest(a, b);
    return 0;
}