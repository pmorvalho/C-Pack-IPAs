
#include <stdio.h>

int main(){
    int num, i;
    float n, maior, menor;
    scanf("%d", &num);
    scanf("%f", &maior);
    menor = maior;
    for(i=1; i<num; ++i){
        scanf("%f", &n);
        if(n<menor)
            menor = n;
        else if(n>maior)
            maior = n;
    }
    printf("min: %f, max: %f\n", menor, maior);
    return 0;
}