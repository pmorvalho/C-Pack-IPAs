

#include <stdio.h>

void quadrado(int n) {
    int i, j;
    for (i = 1; i <= n; i++) {
        printf("%d", i);
        for (j = 1; j < n; j++) {
            printf("\t%d", j+i);
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
