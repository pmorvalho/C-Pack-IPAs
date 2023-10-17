

#include <stdio.h>

void cruz(int n) {
    int x, y;
    for(x = 0; x < n; x++) {
        for (y = 0; y < n; y++) {
            if (y > 0)
                putchar(' ');
            if (x == y || y == n-x-1 ) {
                putchar('*');
            } else {
                putchar('-');
            }
        }
        putchar('\n');
    }
}

int main() {
    int n;
    scanf("%d", &n);
    cruz(n);
    return 0;
}