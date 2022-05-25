#include <stdio.h>

int main()
{
    int n, count_cols, count_linhas, v_inicial;
    scanf("%d", &n);
    if (n < 2)
    {
        return -1;
    }
    count_cols = count_linhas = 1;
    v_inicial = 1;
    while (count_cols <= n)
    {

        printf("%d", v_inicial);
        count_linhas = 1;
        while (count_linhas < n)
        {
            printf("       %d", count_linhas + v_inicial);
            count_linhas++;
        }
        printf("\n");
        count_cols++;
        v_inicial++;
    }

    return 0;
}