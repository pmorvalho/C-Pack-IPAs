

#include <stdio.h>

int main(){
    int N,digito=0, soma=0, contador=0;
    scanf("%d", &N);
    while (N>0){
        contador++;
        digito=N%10;
        soma=soma+digito;
        N=N/10;
    }
    printf("%d\n%d\n", contador, soma);
    return 0;
}