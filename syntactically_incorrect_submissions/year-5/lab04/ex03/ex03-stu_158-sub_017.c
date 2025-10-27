
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
    for (int line = 0; line < max; line++) {
        for (int j = 0; j < n; j++) {
            putchar(vec[j] + line - max >= 0 ? '*' : ' ');
        }
        putchar('\n');
    }

    return 0;
}