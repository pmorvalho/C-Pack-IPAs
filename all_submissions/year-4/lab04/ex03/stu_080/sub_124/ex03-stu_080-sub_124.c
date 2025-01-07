
#include <stdio.h>
#define VECMAX 100

int main() {
    int n, max = 0;
    int num[VECMAX];
    scanf("%d", &n);
    if (n > VECMAX) {
        return 1;
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
        if (num[i] >= max) {
            max = num[i];
        }
    }

    for (int j = max - 1; j >= 0; j--) {
        for (int k = 0; k < n; k++) {
            if (num[k] > j) {
                putchar('*');
            } else {
                putchar(' ');
            }
        }
        putchar('\n');
    }

    return 0;
}

