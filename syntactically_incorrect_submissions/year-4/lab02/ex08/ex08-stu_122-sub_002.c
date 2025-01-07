
#include <stdio.h>

int main()
{
    int n;
    float x,f,soma = 0,media;

    printf("Diga a quantidade: \n");
    scanf("%d",&n);

    for (int i = 1; i <= n; i++) {
        scanf("%f",&x);
        soma += x;
    }
    media = soma / n;
    printf("%.2f\n", media);
    return 0;
}