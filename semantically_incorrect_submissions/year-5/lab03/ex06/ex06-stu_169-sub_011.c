

#include <stdio.h>

int main() {
    int num, digito, soma = 0;
    scanf("%d", &num);

    while (num != 0) {
        digito = num % 10;
        soma = soma + digito;
        num = num / 10;
    }

    if (soma % 9 == 0)
        printf("yes\n");

    else
        printf("no\n");

    return 0;
}