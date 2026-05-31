

#include <stdio.h>

#define VECMAX 100

int main() {
    int n, i, j, max = 0;
    int valores[VECMAX];

    if (scanf("%d", &n) != 1) {
        return 0;
    }

    for (i = 0; i < n; i++) {
        if (scanf("%d", &valores[i]) != 1) {
            break;
        }
        if (valores[i] > max) {
            max = valores[i];
        }
    }

    for (i = 1; i <= max; i++) {
        for (j = 0; j < n; j++) {
            if (valores[j] >= i) {
                putchar('*');
            } else {
                putchar(' ');
            }
        }
        putchar('\n');
    }

    return 0;
}