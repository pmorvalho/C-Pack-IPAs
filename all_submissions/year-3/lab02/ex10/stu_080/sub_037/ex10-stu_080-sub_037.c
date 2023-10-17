
#include <stdio.h>
int main(){
    int num, i = 1, digitos = 0, soma = 0;
    int d, dig;
    scanf("%d", &num);
    d = num / i;
    for(i; d != 0; i * 10){
        dig = d % i;
        digitos++;
        soma += dig;
    }
    
    printf("%d\n%d\n", digitos, soma);
    return 0;
}