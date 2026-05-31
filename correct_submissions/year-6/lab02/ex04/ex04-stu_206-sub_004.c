

#include <stdio.h>

int main() {
    int a, b, c, temp;
    if (scanf("%d %d %d", &a, &b, &c) != 3) return 1;
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    printf("%d %d %d\n", a, b, c);
    return 0;
}