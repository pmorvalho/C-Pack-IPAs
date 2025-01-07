
#include <stdio.h>

void cruz(int n) {
    int i, j;

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            putchar((j == i || j - 1 == n - i) ? '*' : '-');
            putchar((j == n) ? '\n' : ' ');
        }
    }
}

int main() {
    int n;

    scanf("%d", &n);

    cruz(n);
    return 0;
}
