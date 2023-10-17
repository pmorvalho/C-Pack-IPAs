
#include <stdio.h>
#define POTENCIA
int main(){
    int n, num;
    int dig, div = 1, contador = 0, soma = 0;
    scanf("%d", &n);
    while (div <= n){
        num = n / div;
        dig = num % div;
        if (dig == 0)
            contador++;
        soma += dig;
    }
    printf("%d\n%d",contador, soma);
    return 0;
}