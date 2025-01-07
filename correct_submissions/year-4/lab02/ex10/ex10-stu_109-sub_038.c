
#include <stdio.h>

int main() {
    int N, NumDigit = 0, Soma = 0, Digit;

    scanf("%d", &N);

    while (N > 0) {
        Digit = N % 10;
        Soma += Digit;
        NumDigit++;
        N /= 10;
    }
    printf("%d\n", NumDigit);
    printf("%d\n", Soma);
    return 0;
}
