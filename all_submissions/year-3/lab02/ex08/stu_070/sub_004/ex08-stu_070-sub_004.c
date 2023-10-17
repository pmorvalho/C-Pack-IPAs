
#include <stdio.h>

int main ()
{
    int n, i;
    float num, soma, media;
    
    soma = 0;
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        scanf("%f", &num);
        soma += num;
    }
    
    media = soma / n;
    printf("%.2f", media);
    return 0;
}