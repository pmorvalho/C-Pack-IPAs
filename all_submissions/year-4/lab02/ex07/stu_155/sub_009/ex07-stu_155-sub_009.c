
#include <stdio.h>

int main()
{
    int n, div_count = 0;
    scanf("%d", &n);

    for (int i = 1; i < n + 1; ++i)
    {
        if (n % i == 0) ++div_count;
    }

    printf("%d\n", div_count);

    return 0;
}