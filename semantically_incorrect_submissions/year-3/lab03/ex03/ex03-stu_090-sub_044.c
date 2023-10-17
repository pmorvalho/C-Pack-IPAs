

#include <stdio.h>

void cruz(int N) {

    int i, j;

    for (i = 1; i <= N; i++) {
        for (j = 1; j <= N; j++)
            if (j == i && j != N)
                printf("* ");
            else if (j == i && j == N)
                printf("*");
            else if (j == N - i + 1 && j != N)
                printf("* ");
            else if (j == N - i + 1 && j == N)
                printf("*");
            else if (j != i && j != N)
                printf("- ");
            else
                printf("-");
        if (j != N + 1 || i != N)
            printf("\n");    
    }
}













int main(void) {
    int N;
    scanf("%d", &N);
    cruz(N);
    return 0;
}