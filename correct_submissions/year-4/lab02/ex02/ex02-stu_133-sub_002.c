
#include <stdio.h>

int main() {
    int N, M;
    int maior, menor;

    scanf("%d%d", &N, &M);

    if (N > M) {
        maior = N;
        menor = M;
    } else {
        maior = M;
        menor = N;
    }

    printf("%d\n%d\n", menor, maior);
    return 0;
}