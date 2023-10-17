
#include <stdio.h>
int main () {
    int M, N, menor, maior;
    scanf("%d%d", &M, &N);
    if (M < N) {
        menor = M;
        maior = N;
    }
    else {
        menor = N;
        maior = M;
    }
    printf("%d\n%d", menor, maior);
    return 0;
}