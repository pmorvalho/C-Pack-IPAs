

#include <stdio.h>

void piramide(int N) {
    int i, j;
    for (i = 1; i <= N; i++) {
        for (j = 0; j < (N - i); j++) {
            printf("  ");
        }
        for (j = 1; j <= i; j++) {
            printf("%d", j);
            if (i > 1 || j < i) printf(" ");
        }
        for (j = i - 1; j >= 1; j--) {
            printf("%d", j);
            if (j > 1) printf(" ");
        }
        printf("\n");
    }
}
int main() {
    int n;
    if (scanf("%d", &n) == 1 && n >= 2) {
        piramide(n);
    }
    return 0;
}