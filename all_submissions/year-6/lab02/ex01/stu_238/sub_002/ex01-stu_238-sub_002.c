
#include<stdio.h>

int a, b, c, maior;



int main () {
    printf("Introduza o primeiro número: ");
    scanf("%d", &a);        

    printf("Introduza o segundo número: ");
    scanf("%d", &b);

    printf("Introduza o terceiro número: ");
    scanf("%d", &c);

    maior = a;
    if (b > maior) {
        maior = b;
    }
    if (c > maior){
        maior = c;
    }

    printf("O maior número é: %d\n", maior);
    return 0;                                        
}