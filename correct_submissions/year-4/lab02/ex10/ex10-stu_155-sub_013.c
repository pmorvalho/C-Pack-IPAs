
#include <stdio.h>
#define ASCII_ZERO '0'

int main()
{
    int digits = 0, sum = 0;
    int c;

    while ((c = getchar()) != EOF && c != '\n')
    {
        digits++;
        sum += c - ASCII_ZERO;
    }

    printf("%d\n%d\n", digits, sum);

    return 0;
}