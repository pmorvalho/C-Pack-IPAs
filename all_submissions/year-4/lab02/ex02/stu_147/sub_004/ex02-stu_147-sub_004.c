
#include <stdio.h>

int main() {
    int N, M;

    scanf("%d %d", &N, &M);
    
    printf("%d\n", (N < M) ? N : M);

    printf("%d\n", (N > M) ? N : M);

    return 0;
}