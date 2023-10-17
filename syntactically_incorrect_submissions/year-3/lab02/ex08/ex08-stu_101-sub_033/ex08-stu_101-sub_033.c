

#include <stdio.h>

int main(){
    int n;
    float valor,total,media;
    scanf("%d\n", &n);
    scanf("%d\n", &valor);
    total = valor;
    while(n>0){
        scanf("%d\n", &valor);
        total = total + valor;
    }
    media = total / n
    printf("%.2f", media);
}
