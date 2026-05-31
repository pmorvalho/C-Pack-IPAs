

#include <stdio.h>

int main(){

    int n, soma, digs, dig;

    soma = 0;
    digs =0;
    if (scanf("%d", &n)!= 1) return 1;
    while (n> 0){
        dig = (n%10);
        digs += 1;
        soma += dig;
        n /= 10;
    }
    printf("%d\n%d\n", digs, soma);
    return 0;
}