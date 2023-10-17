
#include <stdio.h>
int main(){
    int num, digitos = 0, soma = 0;
    int d, dig;
    scanf("%d", &num);
    
    while (num >= 0){
        d = num / 10;
        dig = num % 10;
        digitos++;
        soma += dig;
    }
    printf("%d\n%d\n", digitos, soma);
    return 0;
}