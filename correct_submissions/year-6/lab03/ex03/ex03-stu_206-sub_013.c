

#include <stdio.h>

void cruz(int N) {
    int i, j;
    for (i = 1; i <= N; i++) {       
        for (j = 1; j <= N; j++) {
            if (i == j || i + j == N + 1) {
            printf("*");
            }
            else {
                printf("-");
            }
            if (j < N) {
                printf(" ");
            }
        }
        printf("\n");
    }
}
int main() {
    int n;
    if (scanf("%d", &n) == 1 && n >= 2) {
        cruz(n);
    }
    return 0;
}