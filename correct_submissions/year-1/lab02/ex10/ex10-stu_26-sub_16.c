#include <stdio.h>

int main(){
    int n, cont, soma;
    soma = 0;
    cont = 0;
    scanf("%d", &n);
    while(n != 0){
        soma += n % 10;
        ++cont;
        n /= 10;
    }
    printf("%d\n", cont);
    printf("%d\n", soma);
    return 0;
}