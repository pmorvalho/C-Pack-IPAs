

#include <stdio.h>

void cruz(int n) {
    int lin, col;
    for (lin = 0; lin < n; lin++) {
        for (col = 0; col < n; col++) {
            if (col)
                putchar(' ');
            putchar((col == lin) || (col + lin == n - 1) ? '*':'-');
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