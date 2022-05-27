#include <stdio.h>

int main(){
    int n, cont;
    float num, soma, media;
    scanf("%d", &n);
    cont = n;
    soma = 0;
    while(n != 0){
        scanf("%f", &num);
        soma += num;
        --n;
    }
    media = soma / cont;
    printf("%.2f\n", media);
    return 0;
}