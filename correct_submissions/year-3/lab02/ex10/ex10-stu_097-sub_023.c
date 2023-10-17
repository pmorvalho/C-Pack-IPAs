
#include <stdio.h>

int main (){

    int N, digito, contador_digitos=0, soma_digitos=0;
    scanf("%d", &N);

    while (N > 0){
        digito = N % 10;          
        soma_digitos += digito;
        contador_digitos ++;
        N = N/10;
    }    
    printf("%d\n%d\n", contador_digitos, soma_digitos);
    return 0;
}