
#include <stdio.h>

int main()
{
    int d, num = 0;
    while ((d = getchar()) != EOF && d != '\n')
    {
        num += d - '0';
    }
    if (num % 9 != 0)
        printf ("no\n");
    else
        printf ("yes\n");
    return 0;
}