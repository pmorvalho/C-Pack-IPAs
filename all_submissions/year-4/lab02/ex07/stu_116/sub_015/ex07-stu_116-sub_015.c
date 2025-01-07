
#include <stdio.h>

int main()
{
    int n, nDivisores = 0;
    scanf("%d", &n);

    int i = 1;
    while (i <= n)
    {
        if ((n % i) == 0)
        {
            nDivisores++;
        }
        i++;
    }
    printf("%d\n", nDivisores);
    return 0;
}