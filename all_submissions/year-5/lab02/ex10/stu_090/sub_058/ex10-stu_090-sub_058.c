

#include <stdio.h>

int main(){
    int numero, resultado, contador, soma;
    contador = 0;
    soma = 0;
    scanf("%d", &numero);
    resultado=numero;
    while(resultado!=0){
        soma+=(resultado%10);
        resultado= resultado/10;
        contador++;
    }
    printf("%d\n%d\n", contador, soma);
    return 0;
}