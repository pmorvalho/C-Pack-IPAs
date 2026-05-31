
#include <stdio.h>

int main()
{
    int n, quant, soma, val;
    soma = 0; quant = 0;
    scanf("%d", &n);
    while (n != 0){
        val = n % 10;
        quant += 1;
        soma += val;
        n /= 10;
    }
    printf("%d\n%d\n", quant, soma);
    return 0;
}