
#include <stdio.h>

int main()
{
    int n, mult = 0, cont;
    scanf("%d", &n);
    for (cont = 1; cont <= n; ++cont) if (n % cont == 0) mult += 1;
    printf("%d\n", mult);
    return 0;
}
