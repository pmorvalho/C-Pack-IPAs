
#include <stdio.h>
#define POTENCIA 10
int main(){
    int n, dig;
    int i = POTENCIA, contador = 0, soma = 0;
    scanf("%d", &n);
    while (n > 0){
        dig = n % i;
        contador++;
        n /= i;
        soma += dig;
    }
    printf("%d\n%d\n",contador, soma);
    return 0;
}