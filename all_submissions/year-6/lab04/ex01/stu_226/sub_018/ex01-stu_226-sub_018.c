

#include <stdio.h>

#define VECMAX 100

int main() {
    int n;
    int valores[VECMAX];

    scanf("%d", &n);

    if (n <= 0 || n >= VECMAX) {
        return 1;
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &valores[i]);
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < valores[i]; j++) {
            putchar('*');
        }
        putchar('\n');
    }

    return 0;
}