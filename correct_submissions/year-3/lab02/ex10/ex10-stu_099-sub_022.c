
#include <stdio.h>

int main()
{
    long inteiro;
    int algarismos = 0, soma = 0, algarismo;

    scanf("%ld", &inteiro);

    while (inteiro > 0) {
        algarismo = inteiro % 10;
        soma += algarismo;

        inteiro /= 10;
        algarismos++;
    }

    printf("%d\n%d\n", algarismos, soma);
    
    return 0;
}
