
#include <stdio.h>

int main(){
    int n, contador, soma = 0;

    scanf("%d",&n);
    for(contador = 1; n >= 10 ; contador++){
        soma += n - (n/10)*10;
        n = n/10; 
    }
    soma += n;
    printf("%d\n", contador);
    printf("%d\n", soma);
    return 0;
}