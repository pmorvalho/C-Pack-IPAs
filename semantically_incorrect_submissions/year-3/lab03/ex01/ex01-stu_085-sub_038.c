
#include <stdio.h>

int main()
{
    int numero;
    int colunas=0; 
    int linhas=0;
    int variavel;
    scanf("%d", &numero);

    while (linhas<numero)
    {
        while (colunas<numero)
        {
            printf("%d\t",variavel++);
            ++colunas;
        }
    ++linhas;
    ++variavel;
    printf("\n");
    }
    return 0;
}
