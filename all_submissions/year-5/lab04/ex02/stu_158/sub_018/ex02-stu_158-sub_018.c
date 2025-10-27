
#include <stdio.h>

#define VECMAX 100

int main() {
    int n = -1, max = 0;

    while (n < 0 || n >= VECMAX) scanf("%d", &n);
    int vec[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &vec[i]);
        if (vec[i] > max) max = vec[i];
    }
    while (max--) {
        for (int i = 0; i < n; i++) {
            if (vec[i]) {
                putchar('*');
                vec[i]--;
            } else putchar(' ');
        }
        putchar('\n');
    }

    return 0;
}