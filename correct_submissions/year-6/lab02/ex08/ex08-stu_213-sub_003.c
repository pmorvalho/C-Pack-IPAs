

#include <stdio.h>

int main()
{
    int quantos, i;
    float soma = 0, media, atual;

    scanf("%d", &quantos);
    for (i = 0; i < quantos; i++)
    {
        scanf("%f", &atual);
        soma += atual;
    }
    media = (soma / quantos);
    printf("%.2f\n", media);
    return 0;
}