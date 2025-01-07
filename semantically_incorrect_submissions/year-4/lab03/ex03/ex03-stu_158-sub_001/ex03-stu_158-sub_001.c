
#include <stdio.h>

void cruz(int n) {
    int i, j;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (i == j || i + j == n + 1) {
                printf("* ");
            } else {
                printf("- ");
            }
        }
        printf("\n");
    }
}

int main() {
    int n;

    scanf("%d", &n);
    cruz(n);
    return 0;
}