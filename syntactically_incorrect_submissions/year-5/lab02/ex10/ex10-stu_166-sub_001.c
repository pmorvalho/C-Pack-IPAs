
#include <stdio.h>

int main () {
    int n, mult = 1, digitos = 0, numero, soma = 0;
    scanf("%d", &n);
    numero = n;
    while (n - mult >= 0) {
        digitos += 1;
        mult *= 10;
    }
    while (numero != 0) {
        soma += numero % 10;
        numero /= 10;
    }
    printf("%d\n%d\n", digitos, soma);
    return 0;
}
//teste