
#include <stdio.h>

int main() {
    int N, dig = 0, soma = 0, algarismo;
    scanf("%d", &N);

    while (N != 0) {
        algarismo = N % 10;
        N /= 10;
        soma += algarismo;
        ++ dig;
    }
    
    printf("%d\n%d\n", dig, soma);

    return 0;
}