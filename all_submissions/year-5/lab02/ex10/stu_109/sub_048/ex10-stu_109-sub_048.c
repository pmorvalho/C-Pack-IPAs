

#include <stdio.h>

int main(){

    int n;
    int n_digitos = 0;
    int soma = 0;

    scanf("%d", &n);

    while(n > 0){
        soma += n % 10;
        n = n / 10;
        n_digitos++;
    }

    printf("%d\n%d\n", n_digitos, soma);

    return 0;
}
