#include <stdio.h>



int main() {
    int num, num_digitos = 0, soma = 0, digito;

    scanf("%d", &num);
    while (num > 0) {
        digito = num % 10;
        num_digitos = num_digitos + 1;
        soma = soma + digito;
        num = num / 10;
    }
    printf("%d\n%d\n", num_digitos, soma);
    return 0;
}