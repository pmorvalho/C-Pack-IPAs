
#include <stdio.h>
#define POTENCIA 10
int main(){
    int n, dig;
    int i = 10, contador = 0, soma = 0;
    scanf("%d", &n);
    for(i = 10; (n / i) >= 0 ; i * POTENCIA){
        dig = n % i;
        ++contador;
        soma += dig;
    }
    
    printf("%d\n%d\n",contador, soma);
    return 0;
}