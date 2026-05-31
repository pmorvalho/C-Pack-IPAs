

#include <stdio.h>

void quadrado(int N);

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        if (n >= 2) {
            quadrado(n);
        }
    }
    return 0;
}

void quadrado(int N) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d\t", i + j + 1);
            }
        printf("\n");
    }
}