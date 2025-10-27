

#include <stdio.h>

int main() {
    int n;
    float d, soma, media;

    scanf("%d", &n);
    
    
    scanf("%f", &d);
    media = soma = d;

    
    for (int contador = 2; contador <= n; contador++) {
        scanf("%f", &d);
        soma += d;
        media = soma / contador;
    }

    printf("%.2f\n", media);
    return 0;
}