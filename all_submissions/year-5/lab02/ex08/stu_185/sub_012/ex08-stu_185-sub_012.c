
#include <stdio.h>
int main(){
    int N, i = 0;
    double media, soma = 0.0;
    float V;
    scanf("%d", &N);
    while(i < N){
        scanf("%f", &V);
        soma = soma + V;
        i++;
    }
    media = soma / N;
    printf("%.2f\n", media);
    return 0;
}