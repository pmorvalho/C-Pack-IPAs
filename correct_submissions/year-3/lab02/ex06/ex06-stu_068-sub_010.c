
#include <stdio.h>

int main(){

    float contador = 2, maior, menor, v, n;
    scanf("%f", &n);
    scanf("%f", &v);
    maior = v;
    menor = v;
    
    while (contador <= n){
        scanf("%f", &v);
        
        if (v >= maior)
            maior = v;
            
        if (v <= menor)
            menor = v;
        contador++;
    }
    
    printf("min: %f, max: %f\n", menor, maior);
    return 0;
    

}

