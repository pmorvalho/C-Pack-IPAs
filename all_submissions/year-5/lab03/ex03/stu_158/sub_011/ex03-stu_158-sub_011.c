
#include <stdio.h>

void cruz(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            printf("%c", i == j || n - i + 1 == j ? '*' : '-');
            if (j != n) printf(" ");
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