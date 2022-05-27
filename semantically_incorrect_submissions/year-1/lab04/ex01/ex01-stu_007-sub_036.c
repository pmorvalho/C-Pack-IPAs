#include <stdio.h>

#define VECMAX 100

void inicializar_vetor(int vetor[], int tamanho);
void preencher_vetor(int vetor[], int tamanho);
void representar_vetor(int vetor[], int tamanho);

int main()
{
    int vet[VECMAX], num_inputs;

    inicializar_vetor(vet, VECMAX);
    scanf("%d", &num_inputs);
    preencher_vetor(vet, num_inputs);
    representar_vetor(vet, num_inputs);

    return 0;
}

void inicializar_vetor(int vetor[], int tamanho)
{
    int i;

    for (i = 0; i < tamanho; ++i)
    {
        vetor[i] = 0;
    }
}

void preencher_vetor(int vetor[], int tamanho)
{
    int i;

    for (i = 0; i < tamanho; ++i)
    {
        scanf("%d", &vetor[i]);
    }
}

void representar_vetor(int vetor[], int tamanho)
{
    int i, j;

    for (i = 0; i < tamanho; ++i)
    {
        for (j = 0; j < vetor[i]; ++j)
        {
            putchar('*');
            if (j < vetor[i])
                putchar(' ');
        }
        putchar('\n');
    }
}
