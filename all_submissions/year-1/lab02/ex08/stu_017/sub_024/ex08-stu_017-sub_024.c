#include <stdio.h>



int main() {
    int numeros, contador;
    float num, soma;

    soma = 0;

    scanf("%d", &numeros);
    for (contador = 0; contador < numeros; contador++) {
        scanf("%f", &num);
        soma = soma + num;
    }
    printf("%.2f\n", soma / numeros);
    return 0;
}