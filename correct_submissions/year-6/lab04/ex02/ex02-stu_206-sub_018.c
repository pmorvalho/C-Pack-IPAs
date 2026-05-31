

#include <stdio.h>
#define VECMAX 100

int main() {
    int n, i, h, max = 0;
    int valores[VECMAX];
    if (scanf("%d", &n) != 1) return 0;
    for (i = 0; i < n; i++) {
        scanf("%d", &valores[i]);
        if (valores[i] > max) {
            max = valores[i];
        }
    }
    for (h = 1; h <= max; h++) {
        for (i = 0; i < n; i++) {
            if (valores[i] >= h) {
                putchar('*');
            } else {
                putchar(' ');
            }
        }
        putchar('\n');
    }
    return 0;
}