

#include <stdio.h>

#define VECMAX 100

int main_old() {
    int n, i, j, val;
    int nums[VECMAX];

    scanf("%d", &n);

    if (n >= VECMAX) return 1;

    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    for (i = 0; i < n; i++) {
        val = nums[i];
        for (j = 0; j < val; j++) {
            putchar('*');
        }

        putchar('\n');
    }

    return 0;
}


int main() {
    int n, i, j, val;

    scanf("%d", &n);

    if (n >= VECMAX) return 1;

    for (i = 0; i < n; i++) {
        scanf("%d", &val);
        for (j = 0; j < val; j++) {
            putchar('*');
        }
        putchar('\n');
    }

    return 0;
}