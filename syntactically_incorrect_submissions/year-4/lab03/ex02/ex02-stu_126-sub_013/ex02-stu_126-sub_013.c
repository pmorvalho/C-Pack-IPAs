
#include <stdio.h>

void piramide(int N) {
    for (int i = 1; i <= N; i++) {
        for (int j = 0; j < N - i; j++) {
            printf("  ");
        }

        for (int k = 1; k <= i; k++) {
            if (i == 1) {
              printf("%d", 1);
              break;
              }
            printf("%d ", k);
        }
        
        for (int l = i - 1; l >=1; l--) {
            printf("%d", l);
            if (l != 1) printf(" ");
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