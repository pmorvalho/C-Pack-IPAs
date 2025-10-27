

#include <stdio.h>
void cruz(int N) {
    for(int l = 0; l < N; l++) {
        for(int c = 0; c < N; c++) {
            if( l == c || l + c == N -1 ) 
                printf("*");
            else
                printf("-");
        }
        printf("\n");
    }
}

int main() {
    int N;

    scanf("%d", &N);

    cruz(N);

    return 0;
}