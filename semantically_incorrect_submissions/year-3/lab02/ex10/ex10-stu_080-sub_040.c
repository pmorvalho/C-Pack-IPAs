
#include <stdio.h>
#define POTENCIA 10
int main(){
    int n, dig;
    float d ;
    int i = POTENCIA, contador = 0, soma = 0;
    scanf("%d", &n);
    
    d = n / i;
    while (d > 0.0){
        dig = n % i;
        ++contador;
        soma += dig;
        i *= POTENCIA;
    }
    
    printf("%d\n%d\n",contador, soma);
    return 0;
}