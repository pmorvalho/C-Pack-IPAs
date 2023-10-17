
#include<stdio.h>
#define ZERO 0
#define DEZ 10

int main(){
    int n, aux, i=0, soma=0;
    scanf("%d", &n);
    aux = n;

    while(n != ZERO){
        aux=n%10;    
        soma=soma+aux;
        n=n/DEZ;
        i++;
    }

    printf("%d\n%d\n",i, soma);
    return 0;
}