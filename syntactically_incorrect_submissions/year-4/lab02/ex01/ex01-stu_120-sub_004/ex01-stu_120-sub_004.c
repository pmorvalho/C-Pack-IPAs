    
#include <stdio.h>

int main() {
    int num1, num2, num3;
    
    
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    
    printf("Digite o terceiro número: ");
    scanf("%d", &num3);
    
    int maior_numero = num1;

    
    if (num2 > maior_numero) {
        maior_numero = num2;
    }
    
    
    if (num3 > maior_numero) {
        maior_numero = num3;
    }
    
    
    printf("O maior número é: %d\n", maior_numero);

    return 0;
}
