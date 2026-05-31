
#include <stdio.h>

void piramide(int N)
{
    int spaces;
    int linha, coluna;

    for (linha = 1; linha <= N; linha++)
    {
        spaces = 2 * (N - linha);

        
        for (coluna = 0; coluna < spaces; coluna++)
        {
            printf(" ");
        }

        
        for (coluna = 1; coluna <= linha; coluna++)
        {
            printf("%d", coluna);
            
            
            if (coluna < linha) {
                printf(" ");
            }
        }

        
        for (coluna = linha - 1; coluna >= 1; coluna--)
        {
            
            
            printf(" %d", coluna); 
        }

        printf("\n");
    }
}

int main()
{
    int N;

    if (scanf("%d", &N) == 1) 
    {
        if (N >= 2)
        {
            piramide(N);
        }
    }

    return 0;
}