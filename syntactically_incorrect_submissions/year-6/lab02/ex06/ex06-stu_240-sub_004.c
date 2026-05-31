
#include <stdio.h>

int main(){
    float n1, n2, n3, n4;
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    float maior = n1;
    float menor = n1;

    if (n2 > maior){
        maior = n2;
    }
    else{
        menor = n2;
    }

    if (n3 > maior){
        maior = n3;
    }
    else if (n3 < menor){
        menor = n3;
    }

    if (n4 > maior){
        maior = n4;
    }
    else if (n4 < menor){
        menor = n4;
    }

    printf("min: %f, max: %f\n", menor, maior);

    return 0;
}