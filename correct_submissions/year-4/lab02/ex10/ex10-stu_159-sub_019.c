
#include <stdio.h>

int main() {
    int n, soma, cont;
    soma = 0;
    cont = 0;

    scanf("%d", &n);

    while (n){
        soma += n % 10;
        ++cont;
        n /= 10;
    }
    printf("%d\n%d\n", cont, soma);
    return 0;
}