

#include <stdio.h>

int main(){
    int n, valor, min, max;
    scanf("%d\n", &n);
    scanf("%f\n", &valor);
    min=valor;
    max=valor;
    while(n>0){
        scanf("%f\n", &valor);
        if(valor>max)
            max=valor;
        if(valor<min)
            min=valor;
        n--;
    printf("min: %f, max: %f\n", min, max);
    }
    return 0;
}
