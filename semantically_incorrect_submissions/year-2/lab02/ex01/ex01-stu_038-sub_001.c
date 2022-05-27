

#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    if (a > b && a > c)
    {
        printf("The highest number is: %d\n", a);
    }
    else if (b > a && b > c)
    {
        printf("The highest value is: %d\n", b);
    }
    else
    {
        printf("The highest value is %d\n", c);
    }

    return 0;
}

