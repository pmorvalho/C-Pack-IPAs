
#include <stdio.h>

int main()
{
    int n, count;
    float val, soma = 0;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%f", &val);
        soma = soma + val;
    }
    printf("%.2f\n", soma/n);
    return 0;
}
