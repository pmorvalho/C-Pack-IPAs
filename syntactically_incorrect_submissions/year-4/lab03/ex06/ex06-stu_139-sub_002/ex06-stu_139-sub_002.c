



#include <stdio.h>

int main()
{
    int n, sum = 0;

    scanf("%d", &n);

    if (n < 10)
    {
        sum = n;
    }
    else
    {
        while (n >= 10)
        {
            sum += n % 10;
            n /= 10;
        }

        sum += n;
    }
    if (sum % 9 == 0) {
        printf("yes\n");
    } else {
        printf("no\n");
    }
}