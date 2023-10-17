
#include <stdio.h>
#define POTENCIA 10
int main(){
    int n, num;
    int dig, i = 1, contador = 0, soma = 0;
    scanf("%d", &n);
    num = n / i;
    while (num <= n){
        dig = num % i;
        if (dig == 0)
            contador++;
        i = i * POTENCIA;
        soma += dig;
    }
    printf("%d\n%d",contador, soma);
    return 0;
}