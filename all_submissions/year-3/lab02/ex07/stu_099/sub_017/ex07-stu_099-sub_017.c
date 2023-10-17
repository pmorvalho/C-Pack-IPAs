
#include <stdio.h>

int main()
{
    int numero, n_divisores = 0, divisor = 1;

    scanf("%d", &numero);

    while (divisor <= numero)
    {
        if (numero % divisor == 0)
        {
            n_divisores++;
        }
        divisor++;
    }
    
    printf("%d\n", n_divisores);
    
    return 0;
}
