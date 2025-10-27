

#include <stdio.h>

#define VECMAX 100

int main() {
    int n, i, j, val, max = 0;
    int nums[VECMAX];

    scanf("%d", &n);

    if (n >= VECMAX) return 1;

    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);

        if (max < nums[i])
            max = nums[i];
    }

    for (i = 0; i < max; i++) {
        for (j = 0; j < n; j++) {
            putchar(i >= max - nums[j] ? '*' : ' ');
        }

        putchar('\n');
    }

    return 0;
}

