

#include <stdio.h>

void cruz(int N) {

    int i, j, k = 1;

    for (i = 1; i <= N; i++) {
        for (j = 1; j <= N; j++)
            if (j == k || j == ((N + 1) - k))
                printf("*");
            else
                printf("-");
        k++;
        printf("\n");
    }
}

int main () {

    int N;

    scanf("%d", &N);
    cruz(N);
    
    return 0;
}