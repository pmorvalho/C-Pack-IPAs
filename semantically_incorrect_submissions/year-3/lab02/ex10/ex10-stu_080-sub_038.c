
#include <stdio.h>
#define POTENCIA 10
int main(){
    int n, dig;
    int i = 10,k = 0, contador = 0, soma = 0;
    scanf("%d", &n);
    for(k = 0; (n / i) >= 0 ; k++){
        dig = n % i;
        i *= POTENCIA;
        ++contador;
        soma += dig;
    }
    
    printf("%d\n%d\n",contador, soma);
    return 0;
}