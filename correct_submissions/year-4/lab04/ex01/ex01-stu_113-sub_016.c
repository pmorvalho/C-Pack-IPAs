
#include <stdio.h>
#define VECMAX 100

int main() {
    int n = -1, i, vec[VECMAX];

    while (n < 0 || n > VECMAX) scanf("%d", &n);
    for (i = 0; i < n; i++) scanf("%d", &vec[i]);
    for (i = 0; i < n; i++) {
        while (vec[i]--) putchar('*');
        putchar('\n');
    }

    return 0;
}
