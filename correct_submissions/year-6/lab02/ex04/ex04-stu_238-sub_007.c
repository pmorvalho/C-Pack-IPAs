#include <stdio.h>

int main() {
    int N, M, P, tmp;

    if (scanf("%d %d %d", &N, &M, &P) == 3) {
        
        if (N > M) { tmp = N; N = M; M = tmp; }
        if (N > P) { tmp = N; N = P; P = tmp; }
        if (M > P) { tmp = M; M = P; P = tmp; }
        printf("%d %d %d\n", N, M, P);
    }

    return 0;
}
