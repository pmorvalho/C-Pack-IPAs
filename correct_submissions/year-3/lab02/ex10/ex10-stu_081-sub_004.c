

#include <stdio.h>

int main(){
    int N, contador=0, soma=0, dig;

    scanf("%d", &N);
    while (N > 0){
        contador += 1;
        dig = N%10;
        soma += dig;
        N = N/10;
    }
    printf("%d\n", contador);
    printf("%d\n", soma);
    
    return 0;
}