
#include <stdio.h>
#define VECMAX 100

int main() {
    int n, i, j, numbers[VECMAX];

    if (scanf("%d", &n) != 1 || n >= VECMAX) return 1;

    for (i = 0; i < n; ++i)
        scanf("%d", &numbers[i]);

    for (i = 0; i < n; ++i) {
        for (j = 0; j < numbers[i]; ++j) 
        putchar('*');
        putchar('\n');
    }

    return 0;
}
