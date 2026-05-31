
#include <stdio.h>

int main ()
{
    int i, n, cont;
    cont = 0;

    scanf("%d",&n);
    for (i = n; i > 0;1--)
    {
        if ((n % i) == 0)
            cont++;
    }
    printf("%d", cont);
    return 0;
}