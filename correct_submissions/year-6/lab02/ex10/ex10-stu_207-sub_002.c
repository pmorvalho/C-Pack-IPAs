

#include <stdio.h>
int main(){
    int N, digitos = 0, soma = 0, dig;
    scanf("%d", &N);
    while (N>0){
        dig = N%10;
        N = N/10;
        digitos++;
        soma += dig;
    }
    printf("%d\n%d\n", digitos, soma);
    return 0;
}