#include <stdio.h>

void quadrado(int N);

int main()
{
    int N;
    scanf("%d", &N);

    quadrado(N);

    return 0;
}


void quadrado(int N)
{
    int coluna, linha;
    
    for (linha = 0; linha < N; ++linha)
    {
        for (coluna = (linha + 1); coluna <= (linha + 5); ++coluna)
        {
            printf("%d", coluna);
            if (coluna < linha + 5)
            {
                printf("\t");
            }
        }
        printf("\n");
    }
}
