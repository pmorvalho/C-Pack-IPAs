
#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if (a < b)
        printf("%d\n%d", a, b);
    else
        printf("%d\n%d", b, a);
}