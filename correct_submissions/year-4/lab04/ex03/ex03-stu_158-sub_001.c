
#include <stdio.h>
#define VECMAX 100

int main() {
    int vec[VECMAX], n = 0, i = 0, max = 0, j;

    while (n <= 0 || n >= VECMAX) {
        scanf("%d", &n);
    }

    j = n;
    while (j--) {
        scanf("%d", &vec[i]);
        max = ((vec[i] > max) ? vec[i] : max);
        i++;
    }

    for (i = 0; i < max; i++) {
        for (j = 0; j < n; j++) {
            putchar(vec[j] >= max - i ? '*' : ' ');
        }
        putchar('\n');
    }    

    return 0;
}