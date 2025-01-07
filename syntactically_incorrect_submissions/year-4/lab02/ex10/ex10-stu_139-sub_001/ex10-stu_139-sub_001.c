

#include <stdio.h>

int main()
{
    int n, sum = 0, len = 1;

    scanf("%d", &n);

    if (n < 10)
    {
        sum = n;
        len = 1;
    }
    else
    {
        while (n >= 10)
        {
            len++;
            sum += n % 10;
            n /= 10;
        }

        sum += n;
    }
    printf("%d\n%d\n", len, sum);
}