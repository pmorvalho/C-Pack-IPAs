
#include <stdio.h>

int main() {
    int N, i, count = 0;

    scanf("%d", &N);

    if (N <= 0) {
        printf("N deve ser positivo.\n");
        return 1;
    }

    for (i = 1; i <= N; i++) {
        if (N % i == 0) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
