
#include <stdio.h>

int main()
{
    int n;
    float a, soma, media;
    scanf("%d", &n);

    soma = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &a);
        soma += a;
    }
    
    media = soma / n;
    printf("%.2f\n", media);

    return 0;
}