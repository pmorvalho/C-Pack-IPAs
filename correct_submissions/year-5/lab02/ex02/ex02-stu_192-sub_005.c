
#include <stdio.h>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    (a>=b) ? printf("%d\n%d\n", b, a) : printf("%d\n%d\n", a, b);
    return 0;
}
