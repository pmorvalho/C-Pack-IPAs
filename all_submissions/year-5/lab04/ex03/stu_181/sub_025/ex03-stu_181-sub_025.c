

#include <stdio.h>

#define VECMAX 100

int main() {
    int n, v[VECMAX], i, j, max = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &v[i]);
        max = max > v[i] ? max : v[i];
    }

    for (i = max; i > 0; i--) {
        for (j = 0; j < n; j++) {
            if (v[j] >= i)
                putchar('*');
            else
                putchar(' ');
        }
        putchar('\n');
    }
    return 0;
}
