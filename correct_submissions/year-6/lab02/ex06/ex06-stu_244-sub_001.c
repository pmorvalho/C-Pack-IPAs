
#include <stdio.h>
int main(){
    int N;
    float min, max, valor;
    scanf("%d%f", &N, &valor);
    min = valor;
    max = valor;
    N--;
    while(N>0){
        scanf("%f", &valor);
        if (valor>max)
            max = valor;
        if (valor<min)
            min = valor;
        N--;
    }
    printf("min: %f, max: %f\n", min, max);
    return 0;
}