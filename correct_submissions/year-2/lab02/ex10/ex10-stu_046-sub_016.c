#include <stdio.h>

int main()
{
    int n, d = 0, s = 0;

    scanf("%d", &n);

    for( ; n > 0; n /= 10)
    {
        d++;
        s += n % 10;
    }

    printf("%d\n%d\n", d, s);

    return 0;
}

