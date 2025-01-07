
#include <stdio.h>

int main() {
    int N, NumDigit = 0, Soma = 0, Digit;

    printf("Introduza um numero inteiro:\n");
    scanf("%d", &N);

    while (N > 0) {
        Digit = N % 10;
        Soma += Digit;
        NumDigit++;
        N /= 10;
    }
    printf("O numero de digitos e: %d\n", NumDigit);
    printf("A soma dos digitos e: %d\n", Soma);
    return 0;
}
