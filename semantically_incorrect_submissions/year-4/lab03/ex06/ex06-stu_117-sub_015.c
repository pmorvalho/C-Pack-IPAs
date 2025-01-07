
#include <stdio.h>

int soma_algarismos(int num)
{
    int soma = 0, digito;
    while(num > 0)
    {
        digito = num % 10;
        num /= 10;
        soma += digito;
    }
    return soma;
}

int divisivel_por_9(int num)
{
    if(num == 9)
        return 1;
    else if(num < 10)
        return 0;
    else
    {
        int soma = soma_algarismos(num);
        return divisivel_por_9(soma);
    }
}

int main()
{
    int num;
    scanf("%d", &num);
    if(divisivel_por_9(num))
    {
        printf("yes\n");
    } else {
        printf("no\n");
    }
    return 0;
}