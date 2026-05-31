
#include <stdio.h>

int main ()
{
    int n,i;
    double val, soma = 0;
    scanf("%d", &n);
    for (i=0; i<n; i++) {
        scanf("%lf", &val);
        soma += val;
    }
    printf("%.2lf\n",soma/n);
    return 0;
}