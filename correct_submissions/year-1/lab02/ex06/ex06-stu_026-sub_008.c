#include <stdio.h>

int main(){
    int n;
    float num, maior, menor;
    scanf("%d", &n);
    scanf("%f", &num);
    maior = num;
    menor = num;
    while(n != 1){
        scanf("%f", &num);
        if(num > maior){
            maior = num;
        } else if(num < menor){
            menor = num;
        }
        --n;
    }
    printf("min: %f, max: %f\n", menor, maior);
    return 0;
}