

#include <stdio.h>

int main()
{
    int a;
    int c = 1;

    scanf("%d", &a);
    while ((a != 1))
    {
        a /= 2;
        c++;
    }

    printf("%d\n", c);
}