
#include <stdio.h>
void piramide(int N) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N -i - 1; j++) {
            printf(" ");
        }
        for (int j = 1; j <= i + i; j++) {
            printf("%d", j);
            if (j != i + 1) {
                printf(" ");
            }
        }
        for (int j = i; j > 0; j--) {
            printf("%d", j);
        }
        printf("\n");
    }
}
int main() {
    int N;
    scanf("%d", &N);
    piramide(N);
    return 0;
}
