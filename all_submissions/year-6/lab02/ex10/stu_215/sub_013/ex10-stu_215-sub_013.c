


#include <stdio.h>  
int main(){
    int num, quantos, soma;
    soma = 0;
    quantos = 0;
    scanf("%d",&num);
    while (num!= 0){
        soma += num % 10;
        quantos += 1;
        num = num/10;
    }
    printf("%d\n%d\n",quantos,soma);
    return 0;
}