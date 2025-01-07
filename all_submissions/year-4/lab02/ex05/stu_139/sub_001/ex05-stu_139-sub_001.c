

#include <stdio.h>

int main()
{
    int a;
    int c = 1;

    scanf("%d", &a);
    while (c <= a)
    {
        printf("%d\n", c);
        c++;
    }
}