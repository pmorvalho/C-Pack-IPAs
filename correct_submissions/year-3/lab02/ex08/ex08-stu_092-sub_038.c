
#include <stdio.h>



int main()
{
    int n, i;
    float num, soma = 0, media = 0;

    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%f", &num);
        soma = soma + num;
    }
    media = soma / n;
    printf("%.2f", media);
    printf("\n");
    return 0;
}
