
#include <stdio.h>

int main() {
    int N;
    int value;
    int i, j;
    scanf("%d", &N);

    if (N > 0 && N < 100) {
        for (i = 1; i <= N; i++) {
            scanf("%d", &value);
            for (j = 1; j <= value; j++) {
                printf("*");
            }
            printf("\n");
        }
    }

    return 0;
}