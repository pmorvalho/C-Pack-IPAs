
#include <stdio.h>

int main() {
    int N, M;
    int max, min;

    scanf("%d%d", &N, &M);

    if (N > M) {
        max = N;
        min = M;
    } else {
        max = M;
        min = N;
    }

    printf("%d\n%d\n", min, max);
    return 0;
}