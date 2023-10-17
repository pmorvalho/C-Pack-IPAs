
#include<stdio.h>

int main(){
    int N,i=1;
    float valor, min, max;

    scanf("%d", &N);

    while(i<=N){
        scanf("%f", &valor);

        if(i==1 || valor>max)
        max = valor;
        if(i==1 || valor<min)
        min = valor;
        i++;
    }

    printf("min: %f, max: %f\n", min, max);
    
return 0;
}