
#include <stdio.h>

void piramide(int N) {
    int i, j, k, l;

    for (i = 1; i <= N; i++) {
        for (j = N; j > i; j--) {
            printf("  ");
        }
        for (k = 1; k <= i; k++) {
            printf("%d", k);
            if (k < i) printf(" ");
        }
        for (l = i - 1; l >= 1; l--) {
            printf(" %d", l);
        }
        printf("\n");
    }
}

int main() {
    int N;
    
    scanf("%d", &N);

    piramide(N);
    return 0;
}