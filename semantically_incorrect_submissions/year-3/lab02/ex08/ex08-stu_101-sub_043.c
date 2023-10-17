

#include <stdio.h>

int main(){
    int n;
    float valor,total,media;
    scanf("%d\n", &n);
    scanf("%f\n", &valor);
    total = valor;
    while(n>2){
        scanf("%f\n", &valor);
        total = total + valor;
        n=n-1;
    }
    media = total / n;
    printf("%.2f", media);
    return 0;
}
