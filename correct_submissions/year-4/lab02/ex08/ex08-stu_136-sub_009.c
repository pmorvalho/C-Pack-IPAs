

#include <stdio.h>

int main() {
    
    int n, i;
    float a;
    float soma, media;

    scanf("%d",&n);

    i = n;

    while (i > 0) {
        scanf("%f",&a);
        soma += a;
        i--;
    }

    media = soma / n;

    printf("%.2f\n", media);
    
    return 0;
}