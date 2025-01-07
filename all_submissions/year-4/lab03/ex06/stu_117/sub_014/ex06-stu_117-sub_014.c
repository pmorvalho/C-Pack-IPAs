
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
    int soma = soma_algarismos(num);
    if(soma == 9)
        return 1;
    else if(soma < 10)
        return 0;
    else
        return divisivel_por_9(soma);
}

int main()
{
    int soma = 0, num;
    while((num = getchar()) != EOF)
    {
        soma += num;
    }
    if(divisivel_por_9(soma))
    {
        printf("yes");
    } else {
        printf("no");
    }
    return 0;
}