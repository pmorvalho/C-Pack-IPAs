
#include <stdio.h>

#define MAX 100

int main()
{
    long s;
    scanf("%ld",&s);

    if (s % 9 == 0)
        printf("yes\n");
    else
        printf("no\n");
    return 0;
}