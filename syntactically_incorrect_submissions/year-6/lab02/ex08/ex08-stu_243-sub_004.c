
#include <stdio.h>

int main (){
    float n, soma = 0;
    scanf("%f", &n);
    float n1 = n;
    while (n > 0) {
        float m;
        scanf("%f", &m);
        soma = soma + m; 
        n--;
    }
    float media = soma / n1;
    printf("%2f", media);
    return 0;
}