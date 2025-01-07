
#include <stdio.h>
int main()
{
    int divisores = 10, soma = 0, contador = 0, inicial;
    scanf("%d", &inicial);
    int numero1 =inicial;
    while (numero1>0){
        int digito = numero1 % 10; 
        soma += digito; 
        numero1 /= 10; 
        divisores *= 10; 
        contador++;
    }
    printf("%d\n%d\n", contador, soma);
    return 0;
}