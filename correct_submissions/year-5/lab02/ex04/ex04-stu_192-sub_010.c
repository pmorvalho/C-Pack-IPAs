
#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if (a<=b) {
        if (c<=b) {
            (a>=c) ? printf("%d %d %d\n", c, a, b) : printf("%d %d %d\n", a, c, b);
        } else {
            printf("%d %d %d\n", a, b, c);
        }
    } else {
        if (c<=a) {
            (b>=c) ? printf("%d %d %d\n", c, b, a) : printf("%d %d %d\n", b, c, a);
        } else {
            printf("%d %d %d\n", b, a, c);
        }
    }
    return 0;
}
