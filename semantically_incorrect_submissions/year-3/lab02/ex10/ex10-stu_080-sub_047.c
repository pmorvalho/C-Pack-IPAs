
#include <stdio.h>
#define CONST 10
int main(){
    int num, i = 1, digitos = 0, soma = 0;
    int d, dig;
    scanf("%d", &num);
    while (d >= 0){
        d = num / i;
        dig = d % i;
        i *= CONST;
        digitos++;
        soma += dig;
    }
    
    printf("%d\n%d\n", digitos, soma);
    return 0;
}