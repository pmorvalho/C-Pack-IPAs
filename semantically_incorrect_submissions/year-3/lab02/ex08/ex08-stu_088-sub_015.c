
#include <stdio.h>

int main()
{
    int n, contador = 0;
    float soma = 0, media, valor;

    scanf("%d", &n);
    
    while(n--)
    {
        scanf("%f", &valor);
        soma += valor;
        contador++;
    }
    media = soma / contador;
    printf("%.2f", media);

    return 0;
}