
#include <stdio.h>

int main(){
    int num1;
    int num2;
    int num3;

    scanf("%d %d %d", &num1, &num2, &num3);

    int menor = num1;
    if(num2 < menor){
        menor = num2;
    }
    if(num3 < menor){
        menor = num3;
    }

    int maior = num1;
    if(num2 > maior){
        maior = num2;
    }
    if(num3 > maior){
        maior = num3;
    }

    int meio = num1 + num2 + num3 - menor - maior;

    printf("%d %d %d\n", menor, meio, maior);

    return 0;
}