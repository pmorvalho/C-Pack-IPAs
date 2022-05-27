#include <stdio.h>

void cruz(int n) {

    int c, l;

    for (l=0; l < n; l++) {
        for (c=0; c < n; c++) {
            if (c == l || c == n - l - 1)
                putchar('*');
            else
                putchar('-');
            
            if (c != 0 || c != n)
                putchar(' ');
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