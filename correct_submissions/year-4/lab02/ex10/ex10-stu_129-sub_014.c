
#include <stdio.h>

int main()
{
    int n, conta_digitos = 0, soma = 0;

    scanf("%d", &n);
    while (n > 0) {
        soma += n % 10;
        n /= 10;
        conta_digitos++;
    }
    printf("%d\n%d\n", conta_digitos, soma);
    
    return 0;
}