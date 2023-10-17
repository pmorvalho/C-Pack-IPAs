
#include <stdio.h>
#define POTENCIA 10
int main(){
    int n;
    float dig;
    int i = 1, contador = 0, soma = 0;
    scanf("%d", &n);
    while ( n >= 0){
        dig = n % i;
        contador += 1;
        i = i * POTENCIA;
        soma += dig;
    }
    printf("%d\n%d\n",contador, soma);
    return 0;
}