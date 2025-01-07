
#include <stdio.h>

void cruz(int N) {
    int i = 1;

    if (N % 2 != 0) {
        while (i <= N) {
            for (int j = 1, k = N; j <= N; ++j, --k) {
                if (j == i || k == i)
                    printf("* ");
                else
                    printf("- ");
            }
            printf("\n");
            ++i;
        }
    } else {
        while (i <= N) {
            for (int j = 1, k = N; j <= N; ++j, --k) {
                if ((j == i && k != i) || (k == i && j != i))
                    printf("* ");
                else
                    printf("- ");
            }
            printf("\n");
            ++i;
        }
    }
}

int main() {
    int N;

    scanf("%d", &N);

    if (N >= 3) {
        cruz(N);
    } 

    return 0;
}
