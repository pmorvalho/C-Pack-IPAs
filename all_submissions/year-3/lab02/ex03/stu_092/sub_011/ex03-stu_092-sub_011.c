
#include <stdio.h>



#define DIVISOR 0

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    if (n % m == DIVISOR)
        printf("yes\n");
    else
        printf("no\n");
    return 0;
}
