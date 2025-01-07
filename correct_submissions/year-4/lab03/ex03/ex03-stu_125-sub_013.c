
#include <stdio.h>

void cruz(int N) {
    int row, col;
    
    for (row = 1; row <= N; row++) {
        for (col = 1; col <= N; col++) {
            if (col == row || col == N-row+1)
                printf("*");
            else
                printf("-");

            if (col == N)
                printf("\n");
            else
                printf(" ");
        }
    }
}

int main() {
    int n;

    scanf("%d", &n);

    cruz(n);

    return 0;
}