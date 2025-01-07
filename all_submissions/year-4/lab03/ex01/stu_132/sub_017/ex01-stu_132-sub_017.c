#include <stdio.h>

void quadrado(int n) {
    int i, j;
    for (i = 1; i <= n; i++) {
        for (j = i; j < i + n; j++) {
            printf("%d", j);
            if (j != i + n - 1) {
                printf("\t");
            }
        }
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);
    quadrado(n);
    return 0;
}
