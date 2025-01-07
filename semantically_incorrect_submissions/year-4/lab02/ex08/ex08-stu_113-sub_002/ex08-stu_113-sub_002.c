
#include <stdio.h>
int main()
{
    float media, valor; int i, n;
    scanf("%d", &n);
    for (i=0;i<n;i++) {
        scanf("%f", &valor);
        media += valor;
    }
    media = media / n;
    printf("%.2f", media);
    return 0;
}
