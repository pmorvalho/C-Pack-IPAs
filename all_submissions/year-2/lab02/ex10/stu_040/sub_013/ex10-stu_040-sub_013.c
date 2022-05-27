#include <stdio.h>



int main() {
    int N, Digitos = 0, M, S=0;
    scanf("%d", &N);

    while(N > 0) {
        Digitos++;
        M = N % 10;
        N = N / 10;
        S = S + M;
    }
    printf("%d\n", Digitos);
    printf("%d\n", S);
    return 0;

}
