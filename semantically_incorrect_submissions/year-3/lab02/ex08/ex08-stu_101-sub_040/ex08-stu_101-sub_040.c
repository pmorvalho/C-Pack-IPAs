

#include <stdio.h>

int main(){
    int n, denominador;
    float valor,total,media;
    scanf("%d\n", &n);
    denominador = n;
    scanf("%f\n", &valor);
    total = valor;
    while(n>1){
        scanf("%f\n", &valor);
        total = total + valor;
        n=n-1;
    }
    media = total / denominador;
    printf("%.2f", media);
    return 0;
}
