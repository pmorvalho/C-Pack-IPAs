
#include <stdio.h>

int main()
{
    int n = 0, count = 0;
    scanf("%d", &n);

    for (int i = n; i > 0; i--)
    {
        if (n % i == 0)
            count++;
    }

    printf("%d\n", count);

    return 0;
}