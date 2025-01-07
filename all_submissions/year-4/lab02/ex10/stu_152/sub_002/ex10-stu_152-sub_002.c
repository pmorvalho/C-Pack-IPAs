

#include <stdio.h>

int main(){
    int num, soma;
    int contador = 0, dig;

    scanf("%d",&num);
    dig = num % 10;
    num = num / 10;

    while (dig != 0){
        contador++;
        soma += dig;

        dig = num % 10;
        num = num / 10;
    } 
    printf("%d\n%d",contador,soma);

    return 0;
}