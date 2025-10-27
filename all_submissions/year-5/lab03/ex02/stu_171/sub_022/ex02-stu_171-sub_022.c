#include <stdio.h>

void piramide(int N) {
    for (int i = 1; i <= N; i++) {
        
        for (int s = 0; s < N - i; s++) {
            printf("  ");
        }

        
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
            if (j < i) {
                printf(" ");
            }
        }

        
        for (int k = i - 1; k >= 1; k--) {
            printf(" %d", k);
        }

        
        printf("\n");
    }
}

int main() {
    int N;
    scanf("%d", &N);
    if (N >= 2) {
        piramide(N);
    }
    return 0;
}
