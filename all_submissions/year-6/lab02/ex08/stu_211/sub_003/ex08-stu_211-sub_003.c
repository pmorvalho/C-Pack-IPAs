
#include <stdio.h>
int main () {
    int i=0, N;
    float soma=0, valor, media;
    scanf("%d",&N);
    scanf("%f",&valor);
    while (i<N) {
        i++;
        soma= soma + valor;
        scanf("%f",&valor);
    }
    media=soma/N;
    printf("%.2f\n",media);
    return 0;
}


   