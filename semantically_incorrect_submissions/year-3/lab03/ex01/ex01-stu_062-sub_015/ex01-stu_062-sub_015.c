
#include <stdio.h>

void quadrado(int n);

int main() {

    int N;
    scanf("%d", &N);

    quadrado(N);

    return 0;
}

void quadrado(int n) {
    int i, j;
    int k = 0;

    for (j = 1; j <= n; j++) {
        for (i = 1 + k; i <= n+k; i++) {
            printf("%d\t", i);
        }
        k++;
        printf("\n");
    }
}