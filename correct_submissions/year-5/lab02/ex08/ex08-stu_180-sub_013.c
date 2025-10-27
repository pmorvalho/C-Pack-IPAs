

#include <stdio.h>

int main(){
    int N, contador=1;
    double num, soma=0, media=0;
    
    scanf("%d", &N);
    scanf("%lf", &num);
    while(contador<N){
        contador++;
        soma=soma+num;
        scanf("%lf", &num);
    }
    soma=soma+num;
    media=soma/N;

    printf("%.2f\n", media);
    return 0;
}