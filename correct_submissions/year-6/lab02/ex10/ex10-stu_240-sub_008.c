
#include <stdio.h>

int main(){
    int N;
    int contador = 0;
    int soma = 0;
    int resto;

    scanf("%d", &N);

    while (N != 0){
        resto = N % 10; 
        N /= 10; 
        contador++;
        soma += resto;
    }

    printf("%d\n%d\n", contador, soma);
    
    return 0;
}