

#include <stdio.h>

void cruz(int N);

int main() {
    int n;
    scanf("%d", &n);
    cruz(n);
    return 0;
}

void cruz(int N) {
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            if ((i == 1 && i == j) || (i == N && i == j) || (j == 1 && i == N) || (j == N && i == 1)) {
                printf("*");
            }
            else if (i == j || j == N - i + 1){
                printf("*");
            }
            else {
                printf("-");
            }
            printf(" ");
        }
        printf("\n");
    }
}