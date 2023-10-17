

#include <stdio.h>

int main(){
    int i = 1;
    float n, min, valor, max;
    
    scanf("%f", &n);
    scanf("%f", &valor);
    min = valor; 
    max = valor;
    while (++i <= n){
        scanf("%f", &valor);
        if (valor > max){
            max = valor;
        }
        else if (valor < min){
            min = valor;
        }
    }
    printf("min: %f, max: %f\n", min, max);
    return 0;
}