
#include <stdio.h>

int main() {
    int n, soma = 0, digitos = 0;

    if (scanf("%d", &n) != 1) return 1;

    while(n){
        soma += n%10;
        digitos++;
        n /= 10;
    }
    printf("%d\n%d\n", digitos, soma);

    return 0;
}