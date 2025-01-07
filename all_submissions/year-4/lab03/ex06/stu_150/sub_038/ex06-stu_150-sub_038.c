

#include <stdio.h>

int soma_de_digs(int num);

int main()
{
    int soma = 0;
    char c;
    for (int i = 0; i < 100 && ((c = getchar()) != EOF) && c != '\0' && c != '\n'; ++i)
    {
        soma += (c - '0');
    }
    while(soma >= 10)
    {
        soma = soma_de_digs(soma);
    }
    if (soma == 0 || soma == 9) printf("yes\n");
    else printf("no\n");
    return 0;
}

int soma_de_digs(int num)
{
    if (num < 10) return num;
    else return (num % 10) + soma_de_digs(num / 10);
}