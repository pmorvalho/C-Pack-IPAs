
#include <stdio.h>

int main()
{
    float valor, soma = 0, media;
    int n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        scanf("%f", &valor);
        soma = soma + valor;
    }
    media = soma / n;
    printf("%.2f\n", media);
    return 0;
}