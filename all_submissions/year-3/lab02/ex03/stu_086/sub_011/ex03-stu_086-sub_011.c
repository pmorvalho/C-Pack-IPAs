

#include <stdio.h>

int main()
{
    int n, m, divisao;

    printf("Introduza dois números inteiros positivos: \n");
    scanf("%d%d", &n, &m);

    if ((n/m) == 2)
    {
        divisao = "yes";
    }
    else 
    {
        divisao = "no";
    }
    printf("divisao \n");
    return 0;
}