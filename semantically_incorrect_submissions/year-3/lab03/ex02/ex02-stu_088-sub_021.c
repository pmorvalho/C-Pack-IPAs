
#include <stdio.h>

void piramide(int N)
{
    int linhas, colunas, contador;

    for(linhas = 0; linhas < N; linhas++)
    {
        for(contador = 0; contador < N - linhas - 1; contador++)
            printf("  ");

        for(colunas = 0; colunas < linhas + 1; colunas++)
            printf("%d ", colunas + 1);
            
        for(colunas = 0; colunas < linhas; colunas++)
        {
            if(colunas == linhas - 1)
                printf("%d", linhas - colunas);
            else
                printf("%d ", linhas - colunas);
        }
        putchar('\n');     
    } 
}

int main()
{
    int N;
    scanf("%d", &N);

    piramide(N);
    return 0;
}