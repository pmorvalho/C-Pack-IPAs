
#include <stdio.h>
int main() {
    int a, b;
    if (scanf("%d %d", &a, &b) !=2) return 1;
    if (a > b) printf("%d\n", b); else printf("%d\n", a);
    printf("%d\n", a>b ? a:b);
    return 0;
}