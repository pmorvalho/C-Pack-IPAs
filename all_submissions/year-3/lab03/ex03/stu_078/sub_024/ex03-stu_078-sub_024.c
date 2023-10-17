

#include <stdio.h>

void cruz(int N) {
    int lin, i;
    if (N % 2 == 0) {
        for (lin = 1; lin <= N/2; lin++) {
            for (i = 0; i < (lin - 1); i++)
              printf("- ");
            printf("* ");
            for (i = 0; i < N - 2 * lin; i++)
                printf("- ");
            printf("*");
            for (i = 0; i < (lin - 1); i++)
              printf(" -");
            printf("\n"); 
        }
        for (lin = N/2; lin > 0; lin--) {
            for (i = 0; i < (lin - 1); i++)
              printf("- ");
            printf("* ");
            for (i = 0; i < N - 2 * lin; i++)
                printf("- ");
            printf("*");
            for (i = 0; i < (lin - 1); i++)
              printf(" -");
            printf("\n");
        }
    }
    else {
        for (lin = 1; lin <= (N - 1) / 2; lin++) {
            for (i = 0; i < (lin - 1); i ++)
                printf("- ");
            printf("* ");
            for (i = 0; i < N - 2 * lin; i++)
                printf("- ");
            printf("*");
            for (i = 0; i < (lin - 1); i++)
              printf(" -");
            printf("\n"); 
        }
        for (i = 0; i < (N - 1) / 2; i++) 
            printf("- ");
        printf("*");
        for (i = 0; i < (N - 1) / 2; i++)
            printf(" -");
        printf("\n");

        for (lin = (N - 1) / 2; lin > 0; lin--) {
            for (i = 0; i < (lin - 1); i ++)
                printf("- ");
            printf("* ");
            for (i = 0; i < N - 2 * lin; i++)
                printf("- ");
            printf("*");
            for (i = 0; i < (lin - 1); i++)
              printf(" -");
            printf("\n"); 
        }
    }
}

int main() {
    int N;
    scanf("%d", &N);
    cruz(N);
    return 0;
}