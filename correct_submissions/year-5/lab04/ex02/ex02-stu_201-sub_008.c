
#include <stdio.h>
#define VECMAX 100

int main() {
    int n, i, numbers[VECMAX], line, max = 0;

    if (scanf("%d", &n) != 1 || n >= VECMAX) return 1;

    for (i = 0; i < n; ++i) {
        scanf("%d", &numbers[i]);
        if (numbers[i] > max) max = numbers[i];
    }

    for (line = 1; line <= max; ++line) {
        for (i = 0; i < n; ++i) 
            putchar(numbers[i] >= line ? '*' : ' ');
        putchar('\n');
    }

    return 0;
}
