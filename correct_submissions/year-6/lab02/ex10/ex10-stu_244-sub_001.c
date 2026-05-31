
#include <stdio.h>
int main(){
    int n, aux, soma = 0, digitos = 0;
    scanf("%d", &n);
    while(n!=0){
        aux = n%10;
        soma += aux;
        digitos ++;
        n= n/10;
    }
    printf("%d\n%d\n", digitos, soma);
    return 0;
}