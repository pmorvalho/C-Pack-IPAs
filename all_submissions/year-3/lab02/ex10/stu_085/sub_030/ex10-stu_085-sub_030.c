
#include <stdio.h>

int main()
{
    int num, digito,soma=0, contador=0;
    scanf("%d", &num);
    while (num>0)
    {
        digito= num%10;
        num= num/10;
        soma += (digito);
        contador++;
    }
    printf("%d\n%d\n", contador, soma);
    return 0;
}
