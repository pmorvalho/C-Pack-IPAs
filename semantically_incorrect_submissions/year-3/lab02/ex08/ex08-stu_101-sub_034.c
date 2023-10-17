

#include <stdio.h>

int main(){
    int n, denominador;
    float valor,total,media;
    scanf("%d", &n);
    denominador = n;
    scanf("%f", &valor);
    total = valor;
    while(n>1){
        scanf("%f", &valor);
        total = total + valor;
        n=n-1;
    }
    media = (total / denominador);
    printf("%.2f", media);
    return 0;
}
