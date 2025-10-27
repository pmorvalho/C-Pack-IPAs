

#include <stdio.h>

void piramide(int N) {
    int i, j;
    for (i = 1; i <= N; i++) {
        for (j = 1; j <= N - i; j++) {
            printf("  ");
        }
        for (j = 1; j <= i; j++) {
            printf("%d", j);
            if (j < i) {
                printf(" ");
            }
        }
        for (j = i - 1; j >= 1; j--) {
            printf(" %d", j);
        }
        printf("\n");
    }   
}

int main(){
    int N;
    scanf("%d", &N);
    if (N >= 2) {
        piramide(N);
    }
    return 0;
}