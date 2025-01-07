
#include <stdio.h>

int main() {
    int N, cont = 1;

    scanf("%d", &N);

    for (int i = 1; i<N; i++) {
        if (N % i == 0) {
            cont++;
        }
    }

    printf("%d\n", cont);

    return 0;
}