
#include <stdio.h>

void piramide(int N) {
    int i, j;
    for (i = 0; i < N; i++) {
        for (j = N - 1 - i; j > 0; j--) 
            printf("  ");
        for (j = 1; j <= 1 + i; j++) {
            printf("%d", j);
            printf(" ");
        }
        for (j -= 2; j > 0; j--) {
            printf("%d", j);
            printf(" ");
        }
        for (j = N - 2 - i; j > 0; j--) 
            printf("  ");
        printf("\n");
    }
    return;
}

int main() {
    int N;
    scanf("%d", &N);
    if (N < 2)
        return 1;
    piramide(N);
    return 0;
}