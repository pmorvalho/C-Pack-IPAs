
#include <stdio.h>
void quadrado(int numero)
{
    int limite = numero, contador = 1, i;
    while (contador <= limite){
        for (i = contador; i < contador + numero; i++){
            printf("%d\t", i);
        }
        printf("\n");
        contador++;
    }
    
}
int main()
{
    int numero;
    scanf("%d", &numero);
    quadrado(numero);
    return 0;
}