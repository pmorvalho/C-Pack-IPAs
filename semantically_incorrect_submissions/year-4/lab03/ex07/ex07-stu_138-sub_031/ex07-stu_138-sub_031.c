
#include <stdio.h>
int main()
{
    int numero, contador;
    char simbolo;
    scanf("%d", &numero);
    contador = numero;
    while (simbolo != '\n'){
        scanf(" %c", &simbolo);
        if (simbolo != '\n'){
           scanf("%d", &numero);
           contador += numero;
        }
    }
    printf("%d \n", contador);
    return 0;
}