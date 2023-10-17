
#include <stdio.h>
int main(){
    float media, n, v, soma = 0;
    int contador = 1;

    scanf("%f", &n);
    while (contador <= n){
        scanf("%f", &v);
        soma += v;
        contador++;

    }

    media = soma / n;
    printf("%.2f", media);
    return 0;

}