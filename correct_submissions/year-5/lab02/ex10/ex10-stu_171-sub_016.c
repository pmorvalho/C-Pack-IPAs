
#include <stdio.h>

int main() {
    int num, contador = 0, soma_digitos = 0;
    scanf("%d", &num);
    while (num >0) {
        soma_digitos += num % 10;
        num /= 10;
        contador++;
    }
    printf("%d\n%d\n", contador, soma_digitos);
    return 0;
}