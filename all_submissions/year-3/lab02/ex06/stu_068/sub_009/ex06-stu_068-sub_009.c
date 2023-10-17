
#include <stdio.h>

int main(){

    int contador = 0, maior, menor, v, n, x;
    scanf("%d", &n);
    
    scanf("%d", &v);
    maior = menor = v;

    while (contador <= n){
        scanf("%d", &x);
        if (v >= x){
            maior = v;
            menor = x;}
        else{
            menor = v;
            maior = x;}
        contador++;
    printf("min: %f, max: %f\n", menor, maior);
    return 0;
    }

}