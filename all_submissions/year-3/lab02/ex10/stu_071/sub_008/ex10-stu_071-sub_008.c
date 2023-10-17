
#include<stdio.h>

int main() {
    int N, digitos = 0, soma = 0;
    
    
    scanf("%d", &N);
    
    while (N != 0) {
        digitos++;
        soma += N % 10;
        N /= 10;
    }
    
    printf(" %d\n%d\n", digitos, soma);
    
    return 0;
}



