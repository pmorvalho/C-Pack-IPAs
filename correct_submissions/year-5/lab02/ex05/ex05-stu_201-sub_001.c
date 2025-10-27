
#include <stdio.h>

int main() {
    int n, x;

    if (scanf("%d", &n) != 1) return 1;

    x = 1;
    while (x <= n) 
        printf("%d\n", x++);

    return 0;
}