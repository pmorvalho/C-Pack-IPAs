
#include <stdio.h>

void piramide(int n) {
    int i, j;
    for (i = 1; i <= n; i++) {
        for (j = 0; j < (n - i); j++) {
            printf("  ");
        }
        for (j = 1; j <= i; j++) {
            if (j > 1) putchar(' ');
            printf("%d", j);
        }
        for (j = i - 1; j > 0; j--) {
            printf(" %d", j);
        }
        putchar('\n');
    }
}

int main() {
    int n;
    if (scanf("%d", &n) != 1 || n < 2) return 0;
    piramide(n);
    return 0;
}