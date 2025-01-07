
#include <stdio.h>

void piramide(int N) {
    if (N < 2) {
        return;
    }
    for (int i = 0; i < N; i++) {
        
        for (int j = 0; j < N - i - 1; j++)
            printf("  ");
        
        for (int j = 0; j <= i; j++) {
            printf("%d", j + 1);
            if (j != i)
                printf(" ");
        }
        
        for (int j = i - 1; j >= 0; j--) {
            printf(" %d", j + 1);
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
