

#include <stdio.h>

int main()
{
    long number;

    if (scanf("%ld", &number) != 1)
    {
        return 2;
    }

    long half = number / 2;
    if (number % 2 != 0)
    {
        half++;
    }

    long count = 0;
    for (long i = 2; i <= half; i++)
    {
        if (number % i == 0)
        {
            count++;
        }
    }

    count += 2;

    printf("%ld\n", count);

    return 0;
}