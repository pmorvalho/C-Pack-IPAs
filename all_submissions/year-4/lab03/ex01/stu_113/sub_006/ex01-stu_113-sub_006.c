

#include <stdio.h>

void quadrado(int n) {
    int i, j;

    for (i = 1; i <= n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d%s", i+j, (j == n - 1) ? "\n" : "\t");
        }
    }
}

int main() {
    int n = 0;

    while (n < 2) scanf("%d", &n);

    quadrado(n);
    return 0;
}
