
#include <stdio.h>

int main()
{
    int n;
    float x, media, soma = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &x);
        soma += x;
    }
    media = soma / n;
    printf("%.2f\n", media);
    return 0;
}