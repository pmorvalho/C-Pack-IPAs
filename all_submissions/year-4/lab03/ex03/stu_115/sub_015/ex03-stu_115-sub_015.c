
#include <stdio.h>

void cruz(int N) {
    int coord_1 = 0, coord_2 = N - 1;
    for (int i = 0; i < N; i++) {
        for (int k = 0; k < N; k++) {
            
            if (k == coord_1 || k == coord_2) {
                printf("* ");
            } else {
                printf("- ");
            }
        }
        coord_1 += 1;
        coord_2 -= 1;

        printf("\n");
    }    
}

int main () {
    int N;
    scanf("%d", &N);
    cruz(N);
    return 0;
}