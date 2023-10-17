#include <stdio.h>



int main() {
    int numeros, contador;
    float num, soma;

    scanf("%d", &numeros);
    for (contador = 0; contador < numeros; contador++) {
        scanf("%f", &num);
        soma = soma + num;
    }
    printf("%f", soma / numeros);
    return 0;
}