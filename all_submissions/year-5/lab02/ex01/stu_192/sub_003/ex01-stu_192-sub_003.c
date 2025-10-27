
#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if (a>b) {
        (c>=a) ? (printf("%d\n", c)) : printf("%d\n", a);
    } else {
        (c>=b) ? (printf("%d\n", c)) : printf("%d\n", b);
    }
    return 0;
}