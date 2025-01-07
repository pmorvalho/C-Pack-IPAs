

#include <stdio.h>

void cruz(int N) {
    int i, j;
    for (j = 1; j <= N; ++j) {
        for (i = 1; i <= N; ++i) {
            if (i == j)
                printf("*");
            else if (i == N - j + 1)
                printf("*");    
            else
                printf("-");

            if (i != N)
                printf(" ");
        }
        printf("\n");
    }  
}

int main() {
    int n;
    scanf("%d", &n);
    cruz(n);
    return 0;
}