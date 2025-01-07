
#include <stdio.h>
#define VECMAX 100

int main() {
    int n = -1, i, temp;

    while (n < 0 || n >= VECMAX) {
        scanf("%d", &n);
    }

    for (i = 0; i < n; i++) {
        scanf("%d", &temp);
        while (temp--) {
            putchar('*');
        }
        putchar('\n');
    }

    return 0;
}