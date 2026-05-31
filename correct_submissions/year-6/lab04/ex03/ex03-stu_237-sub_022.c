
#include <stdio.h>

#define VECMAX 100

int main() {
    int N;
    int value;
    int i, j;
    int linhasMax;
    int nums[VECMAX];
    
    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        scanf("%d", &value);
        if (i == 0) {
            linhasMax = value;
        }
        else {
            if (value > linhasMax) {
                linhasMax = value;
            }
        }
        nums[i] = value;
    }

    for (i = linhasMax; i >= 1; i--) {
        for (j = 0; j < N; j++) {
            if (i <= nums[j]) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}