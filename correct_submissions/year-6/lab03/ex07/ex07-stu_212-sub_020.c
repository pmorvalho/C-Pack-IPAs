
#include <stdio.h>

int main() {
    int r = 0, a = 0;
    char c;
    scanf("%d", &r);
    while (scanf(" %c %d", &c, &a) == 2) {
        r = (c == '+' ? r + a : r - a);
    }
    printf("%d\n", r);
    return 0;
}