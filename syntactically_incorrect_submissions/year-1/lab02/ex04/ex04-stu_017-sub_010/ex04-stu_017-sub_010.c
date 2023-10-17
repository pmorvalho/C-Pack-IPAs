#include <stdio.h>



int main () {
    int a, b, c;

    scanf("%d%d%d", &a, %b, %c);

    if (b < a) {
        a, b = b, a;
    }
    if (c < a) {
        a, c = c, a;
    }

    printf("%d %d %d", a, b, c);
    return 0;
}