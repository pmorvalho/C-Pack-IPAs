
#include <stdio.h>
void quadrado(int numero)
{
    int limite = numero, contador = 1, i;
    while (contador <= limite){
        for (i = contador; i < contador + numero; i++){
            if (i - contador < numero - 1){
                printf("%d\t", i);
            }
            else{
                printf("%d\n", i);
            }
        }
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