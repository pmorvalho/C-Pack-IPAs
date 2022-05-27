#include <stdio.h>



int main() {
    int N1, N2, N3;
    scanf("%d %d %d", &N1, &N2, &N3);
    if (N1 < N2 && N2 < N3) {
        printf("%d %d %d\n", N1, N2, N3);
    }
    else if (N1 < N3 && N3 < N2) {
        printf("%d %d %d\n", N1, N3, N2);
    }
    else if (N2 < N1 && N1 < N3) {
        printf("%d %d %d\n", N2, N1, N3);
    }
    else if (N2 < N3 && N3 < N1) {
        printf("%d %d %d\n", N2, N3, N1);
    }
    else if (N3 < N1 && N1 < N2) {
        printf("%d %d %d\n", N3, N1, N2);
    }
    else if (N3 < N2 && N2 < N1) {
        printf("%d %d %d\n", N3, N2, N1);
    }
    return 0;
}