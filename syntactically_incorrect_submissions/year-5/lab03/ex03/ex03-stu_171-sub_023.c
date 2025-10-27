#include <stdio.h>

void cruz(int N);

int main() {
    int N;
    scanf("%d", &N);
    if (N >= 2) {
        cruz(N);
    }
    return 0;
}

void cruz(int N) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i == j || i + j == N - 1) {
                printf("*");
            } else {
                printf("-");
            }
            if (j < N - 1) { 
                printf(" ");
            }
        }
        printf("\n");
    }
}


