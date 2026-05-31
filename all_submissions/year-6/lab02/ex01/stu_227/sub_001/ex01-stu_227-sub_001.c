
#include <stdio.h>

int main() {
    int num1, num2, num3;

    print("Escreva o primeiro número: ");
    scanf("%d", num1);
    print("Escreva o segundo número: ");
    scanf("%d", num2);
    print("Escreva o terceiro número: ");
    scanf("%d", num3);

    int maior = num1;
    if (num2 > maior) {
        maior = num2;
    }
    if (num3 > maior) {
        maior = num3;
    }

    printf("O maior número é %d", maior);
    return 0;
}