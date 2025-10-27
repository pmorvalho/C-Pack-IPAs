
#include <stdio.h>

#define VECMAX 100

int main() {
    int n = -1, put = 1;

    while (n < 0 || n >= VECMAX) scanf("%d", &n);
    int vec[n];
    for (int i = 0; i < n; i++) scanf("%d", &vec[i]);
    while (put) {
        put = 0;
        for (int i = 0; i < n; i++) {
            if (vec[i]) {
                putchar('*');
                vec[i]--;
                put = 1;
            } else putchar(' ');
        }
        putchar('\n');
    }

    return 0;
}