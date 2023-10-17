
#include <stdio.h>

void piramide(int N);

int main() {
    int N;
    
    scanf("%d", &N);
    while(N < 2){
        scanf("%d", &N);    
    }
    piramide(N);
    return 0;
}

void piramide(int N) {
    int i, j, k;
    for (i = 1; i <= N; i++) {
        for (j = 1; j <= (N-i)*2; j++) {
            printf(" ");
        }
        for (k = 1; k <= i; k++) {
            printf("%d", k);
            if (k != i) {
                printf(" ");
            }
        }
        for (k = i-1; k >= 1; k--) {
            printf(" %d", k);
        }
        printf("\n");
    }
}
