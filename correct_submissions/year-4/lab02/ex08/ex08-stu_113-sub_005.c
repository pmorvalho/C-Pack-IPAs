
#include <stdio.h>
int main()
{
    float media, soma, valor; int i, n;
    scanf("%d", &n);
    for (i=0;i<n;i++) {
        scanf("%f", &valor);
        soma += valor;
    }
    media = soma / n;
    printf("%.2f\n", media);
    return 0;
}
