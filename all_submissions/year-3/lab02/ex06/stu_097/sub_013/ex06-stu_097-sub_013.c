

#include <stdio.h>

int main(){

    int N,  i=1;
    float valor, max, min;
    scanf("%d", &N);                    

    scanf("%f", &valor);                
    max=valor;
    min=valor;

    while (i < N){
        scanf("%f", &valor);
        if (valor >= max)
            max = valor;
        if (valor <= min)
            min = valor;
        i ++;
    }
    printf("min: %f, max: %f\n", min, max);
    return 0;
} 