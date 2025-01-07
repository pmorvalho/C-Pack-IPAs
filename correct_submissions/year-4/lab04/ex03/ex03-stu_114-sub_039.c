
#include <stdio.h>

#define VECMAX 100

int main () {

    int V[VECMAX];
    int N, M_incial, M, i = 0;
    
    scanf("%d", &N);

    for(M = 0; i <= N - 1 ; i++) {

        scanf("%d", &V[i]);
        M = (V[i] > M) ? (V[i]) : M;

    }
    
    M_incial = M;

    for(M = M; M != 0; M--) {

        for (i = 0; i <= N - 1; i++) {

            if (V[i] == M_incial || V[i] > M_incial) {
                putchar('*');
            } else if (V[i] < M_incial) {
                putchar(' ');
            }

            if (i == N - 1) {
                putchar('\n');
            }
        }
                M_incial--;
    }

    return 0;
}