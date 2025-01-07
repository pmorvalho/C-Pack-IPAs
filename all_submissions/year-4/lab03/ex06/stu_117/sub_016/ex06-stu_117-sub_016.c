
#include <stdio.h>

long int soma_algarismos(long int num)
{
    long int soma = 0, digito;
    while(num > 0)
    {
        digito = num % 10;
        num /= 10;
        soma += digito;
    }
    return soma;
}

long int divisivel_por_9(long int num)
{
    if(num == 9)
        return 1;
    else if(num < 10)
        return 0;
    else
    {
        long int soma = soma_algarismos(num);
        return divisivel_por_9(soma);
    }
}

int main()
{
    long int num;
    scanf("%d", &num);
    if(divisivel_por_9(num))
    {
        printf("yes\n");
    } else {
        printf("no\n");
    }
    return 0;
}