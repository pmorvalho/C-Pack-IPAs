

#include <stdio.h>

int main ()
{
    int n1, n2, n3, extra1;
    scanf ("%d %d %d", &n1, &n2, &n3);
    if (n2<n1)
    {
        extra1 = n1;
        n1 = n2;
        n2 = extra1;
    }
    if (n3 < n2)
    {
        extra1 = n3;
        n3 = n2;
        n2 = extra1;
    }
    if (n2 < n1)
    {
        extra1 = n1;
        n1 = n2;
        n2 = extra1;
    }
    printf("%d %d %d\n",n1, n2, n3);
    return 0;
}