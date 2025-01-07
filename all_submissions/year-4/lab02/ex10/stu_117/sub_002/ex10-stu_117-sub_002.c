
#include <stdio.h>

int main()
{
    int num, digito, soma, contagem = 0;
    scanf("%d", &num);
    while(num > 0) {
        digito = num % 10;
        num /= 10;
        soma += digito;
        contagem++;
    }
    printf("%d\n%d\n", contagem, soma);
    return 0;
}