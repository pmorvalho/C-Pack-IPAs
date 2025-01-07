
#include <stdio.h>

void cruz(int N)
{
    for(int linha = 1; linha <= N; linha++)
    {
        for(int coluna = 1; coluna <= N; coluna++)
        {
            if(coluna - 1)
                putchar(' ');
              
            if(linha == coluna || coluna == N - linha + 1)
                putchar('*');
            else
                putchar('-');
        }
        putchar('\n');
    }
}

int main()
{
    int N;
    scanf("%d", &N);
    cruz(N);
    return 0;
}