#include <stdio.h>


int main(){
    
    int N;
    float numerador=0;
    int i=0;
    float valor=0;
    float media=0;
    
    
    scanf("%d", &N);

    while(i <= N){

        scanf("%f",&valor);

        numerador=+valor;

    }

    media=numerador/N;

    printf("%.2f\n", media);


return 0;

}