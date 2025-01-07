
#include <stdio.h>

void imprime_linha(int N, int esq, int dir)
{
    for(int k = 1; k <= N; k++) {
        if(k == esq || k == dir)
            putchar('*');
        else
            putchar('-');
        if(k < N)
            putchar(' ');
    }
    putchar('\n');
}

void calcula(int N, int meio, int meio2, int meio3)
{
    for(int i = 1, j = N; i <= meio; i++, j--)
        imprime_linha(N, i, j);
    for(int i = meio2, j = meio3; i > 0; i--, j++)
        imprime_linha(N, i, j);
}

void cruz(int N)
{
    if(N % 2 == 0)
        calcula(N, N/2, N/2, N/2 + 1);
    else
        calcula(N, N/2, N/2 + 1, N/2 + 1);
}

int main()
{
    int N;
    scanf("%d", &N);
    cruz(N);
    return 0;
}