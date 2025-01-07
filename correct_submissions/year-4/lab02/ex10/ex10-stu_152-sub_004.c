

#include <stdio.h>

int main(){
    int num, soma;
    int contador = 0, dig;

    scanf("%d",&num);

    while (num != 0){
        dig = num % 10;
        num = num / 10;
        contador++;
        soma += dig;
        
    } 
    printf("%d\n%d\n",contador,soma);

    return 0;
}