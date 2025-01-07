
#include <stdio.h>
int main() {
    int N, M;
    
    scanf("%d", &N);
    scanf("%d", &M);
    
    int menor, maior;
    if (N < M) {
        menor = N;
        maior = M;
    } else {
        menor = M;
        maior = N;
    }
    
    printf("%d\n", menor);
    printf("%d\n", maior);
    return 0;
}
