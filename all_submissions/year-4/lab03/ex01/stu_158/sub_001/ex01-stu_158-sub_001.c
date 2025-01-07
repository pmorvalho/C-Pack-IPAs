
#include <stdio.h>

void quadrado(int n) {
    int i, j;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            printf("%d", j + i - 1);
            if (j != n) {
                printf("\t");
            } else {
                printf("\n");
            }
        }
    }
}

int main() {
    int n = 0;

    while (n < 2) {
        scanf("%d", &n);
    }

    quadrado(n);
    return 0;
}