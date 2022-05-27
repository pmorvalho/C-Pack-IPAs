#include <stdio.h>

void quadrado(int n)
{
    int count_cols, count_linhas, v_inicial;
    count_cols = count_linhas = 1;
    v_inicial = 1;
    while (count_cols <= n)
    {

        printf("%d", v_inicial);
        count_linhas = 1;
        while (count_linhas < n)
        {
            printf("\t%d", count_linhas + v_inicial);
            count_linhas++;
        }
        printf("\n");
        count_cols++;
        v_inicial++;
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    if (n < 2)
    {
        return -1;
    }
    quadrado(n);
    return 0;
}