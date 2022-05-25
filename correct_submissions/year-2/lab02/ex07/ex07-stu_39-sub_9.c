#include <stdio.h>
int main()
{
    int n, i, cont = 1;
    scanf("%d", &n);
    for (i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
            cont++;
    }
    printf("%d\n", cont);
    return 0;
}