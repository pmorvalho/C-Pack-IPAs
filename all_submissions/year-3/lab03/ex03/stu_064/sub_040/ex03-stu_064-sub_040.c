

#include <stdio.h>

void cruz(int n) {
    int i, j;

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (j > 0)
                putchar(' ');
            if (i == j || j == n - i - 1)
                putchar('*');
            else 
                putchar('-');
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