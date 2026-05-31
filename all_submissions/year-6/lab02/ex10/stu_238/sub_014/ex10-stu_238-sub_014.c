
#include <stdio.h>

int main() {
    int N, contador = 0, soma = 0, digito;

    
    if (scanf("%d", &N) == 1) {
        
        
        if (N == 0) {
            contador = 1;
            soma = 0;
        } else {
            
            while (N > 0) {
                digito = N % 10;    
                soma += digito;     
                contador++;         
                N = N / 10;         
            }
        }

        
        printf("%d\n", contador);
        printf("%d\n", soma);
    }

    return 0;
}