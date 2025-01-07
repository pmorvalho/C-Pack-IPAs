
#include <stdio.h>
int N;
int i = 0;
int cont = 0;


int main() {
    scanf("%d", &N);
    printf("%d", N);
    for (i; i<N; i++) {
        if (N % i == 0) {
            cont++;
        }
    }
    printf("%d", cont);
    return 0;
}