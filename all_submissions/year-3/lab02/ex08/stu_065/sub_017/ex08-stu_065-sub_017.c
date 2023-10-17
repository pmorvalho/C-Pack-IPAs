

#include <stdio.h>

int main(){
    int N, cont=1;
    float num, soma, media;

    scanf("%d%f", &N, &num);
    soma = num;
    while (cont < N){
        scanf("%f", &num);
        soma += num;
        cont++;
    }
    media = soma / N;
    printf("%.2f", media);
    return 0;
}