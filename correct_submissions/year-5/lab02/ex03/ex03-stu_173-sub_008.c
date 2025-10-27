

#include <stdio.h>

#define IS_DIVISOR "yes"
#define IS_NOT_DIVISOR "no"

int main() {
    int m, n;

    scanf("%d%d", &n, &m);
    if (n % m == 0)
        printf("%s\n", IS_DIVISOR);
    else 
        printf("%s\n", IS_NOT_DIVISOR);
    return 0;
}