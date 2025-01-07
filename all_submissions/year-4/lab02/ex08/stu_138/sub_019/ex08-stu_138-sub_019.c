
#include <stdio.h>
int main()
{
    int quantidade, i;
    float numeros, media, acumulador;
    scanf("%d", &quantidade);
    scanf("%f", &numeros);
    acumulador = numeros;
    for (i = 2; i <= quantidade; i++){
        scanf("%f", &numeros);
        acumulador += numeros;
    }
    media = acumulador/quantidade;
    printf("%.2f\n", media);
    return 0;
}