
#include <stdio.h>

int main()
{
    int numero;
    int colunas=0; 
    int linhas=0;
    int variavel=1;
    scanf("%d", &numero);

    while (linhas<numero)
    {
        while (colunas<numero)
        {
            printf("%d\t",variavel++);
            ++colunas;
        };
    variavel=variavel-numero+1;
    ++linhas;
    colunas=0;
    printf("\n");
    }
    printf("\n");
    return 0;
}




