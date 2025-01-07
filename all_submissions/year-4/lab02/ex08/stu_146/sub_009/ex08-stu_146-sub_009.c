

#include <stdio.h>

int main(){

    float media, curr, soma = 0;
    int n, i = 0;

    scanf("%d", &n);

    while(++i <= n){
        scanf("%f", &curr);
        soma = soma + curr;
    }
    media = soma / n;
    printf("%.2f", media);
    return 0;
}