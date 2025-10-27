

#include <stdio.h>

int main() {
    int num, resto, soma = 0, digitos = 0;
    scanf("%d", &num);

    while (num != 0) {
        resto = num % 10;
        soma = soma + resto;
        ++digitos;
        num = num / 10;
    }
    
    printf("%d\n%d\n", digitos, soma);

    return 0;
}
