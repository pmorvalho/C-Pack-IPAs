
#include <stdio.h>
#define VECMAX 100

int main() {
    int n = -1, i, j, vec[VECMAX], max = 0;

    while (n < 0 || n > VECMAX) scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &vec[i]);
        if (max < vec[i]) max = vec[i];
    }
    for (j = 0; j < max; j++) {
        for (i = 0; i < n; i++) putchar(vec[i] <= j ? ' ' : '*');
        putchar('\n');
    }

    return 0;
}
