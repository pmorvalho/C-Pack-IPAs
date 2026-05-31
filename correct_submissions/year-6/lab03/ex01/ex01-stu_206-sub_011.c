

#include <stdio.h>

void quadrado(int N) {
    int i, j;
    for (i = 1; i <= N; i++) {       
        for (j = 0; j < N; j++) {
            printf("%d", i + j);
            if (j < N - 1) {
                printf("\t");
            }
        }
        printf("\n");
    }
}
int main() {
    int n;
    if (scanf("%d", &n) == 1 && n >= 2) {
        quadrado(n);
    }
    return 0;
}