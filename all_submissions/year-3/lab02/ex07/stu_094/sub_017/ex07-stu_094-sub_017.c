

#include <stdio.h>

int main () 
{
    int v, i, n_div = 0;

    scanf("%d", &v);

    for (i = 1; i <= v; i++)
        if (v % i == 0)
            n_div++;
            
    printf("%d\n", n_div);
    return 0;
}