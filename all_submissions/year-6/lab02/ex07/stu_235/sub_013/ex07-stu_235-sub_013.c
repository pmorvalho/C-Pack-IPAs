
#include <stdio.h>

int main ()
{
    int i, n, cont;
    cont = 0;

    scanf("%d",&n);
    for (i = n; i > 0;i--)
    {
        if ((n % i) == 0)
            cont++;
    }
    printf("%d\n", cont);
    return 0;
}