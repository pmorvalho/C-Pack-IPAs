#include <stdio.h>


int main(){
    
    int N;
    float numerador=0;
    int i=1;
    float valor=0;
    float media=0;
    
    
    scanf("%d", &N);

    while(i <= N){

        scanf("%f",&valor);

        numerador=numerador + valor;
        i++;
    }

    media=numerador/N;

    printf("%.2f\n", media);


return 0;

}