
#include <stdio.h>

int main()
{
    int n1, n2, n3, n;
    scanf("%d %d %d", &n1, &n2, &n3);
    if (n1 > n2 && n1 > n3)
        n = n1;
    else if (n2 > n1 && n2 > n3)
        n = n2;
    else
        n = n3;
    printf("%d\n", n);
    return 0;
}