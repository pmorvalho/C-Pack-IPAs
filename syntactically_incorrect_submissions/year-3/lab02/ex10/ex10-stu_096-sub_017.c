
#include <stdio.h>
int main () {
    int N, i, soma = 0, resto, contador = 0;
    scanf("%d", &N);
    while (N <= 0)
        scanf("%d", N);
    while (N >= 10){
        resto = (N % 10);
        soma+=resto;
    }
    
    printf("%d", contador);
    return 0;
    
}

