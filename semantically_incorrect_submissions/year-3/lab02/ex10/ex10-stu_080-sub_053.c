
#include <stdio.h>
#define POTENCIA 10
int main(){
    int n, num;
    int dig, div = 1,i = 1, contador = 0, soma = 0;
    scanf("%d", &n);
    while (div <= n){
        num = n / i;
        dig = num % div;
        if (dig == 0)
            contador++;
        i = i * POTENCIA;
        div++;
        soma += dig;
    }
    printf("%d\n%d",contador, soma);
    return 0;
}