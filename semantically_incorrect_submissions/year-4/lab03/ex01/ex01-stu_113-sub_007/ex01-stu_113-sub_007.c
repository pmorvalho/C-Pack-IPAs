

#include <stdio.h>

void quadrado(int n) {
    int i, j;

    for (i = 1; i <= n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d\t", i+j);
        }
        printf("\n");
    }
}

int main() {
    int n = 0;

    while (n < 2) scanf("%d", &n);

    quadrado(n);
    return 0;
}
