
#include <stdio.h>

int main() {
    int a, b, c;

    if(scanf("%d%d%d", &a, &b, &c) != 3)
        return 1;

    if (a >= b && a >= c)
        printf("%d\n", a);
    else if (b >= a && b >= c)
        printf("%d\n", b);
    else
        printf("%d\n", c);
        
    return 0;
}