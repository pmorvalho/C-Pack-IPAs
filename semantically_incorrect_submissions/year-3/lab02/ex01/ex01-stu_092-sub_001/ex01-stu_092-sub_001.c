

#include <stdio.h>


#define PASSO 1
#define INICIO 0
#define FIM 2

int main()
{
    int n_maior = INICIO, contador, lista[3];
    printf("Introduza três números inteiros:\n");
    for (contador = INICIO; contador <= FIM; contador = contador + PASSO)
        scanf("%d", &lista[contador]);
    for (contador = INICIO; contador <= FIM; contador = contador + PASSO)
    {
        if (lista[contador] > n_maior)
            n_maior = lista[contador];
    } 
    printf("%d\n", n_maior);
    return 0;
}