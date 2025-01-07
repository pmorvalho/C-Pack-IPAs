
#include <stdio.h>

enum estado {NUMERO, FORA, INICIO};
enum operacao {SOMA, SUBTRACAO};

int algarismo(char caracter)
{
    return '0' <= caracter <= '9';
}

int main()
{
    enum estado est = INICIO;
    enum operacao op;

    char atual;
    int total = 0, num;

    while((atual = getchar()) != EOF)
    {
        switch(est)
        {
            case INICIO:
                if(algarismo(atual))
                {
                    total *= 10;
                    total += atual - '0';
                    printf("%d", total);
                }
                else
                    est = FORA;
                break;
            case FORA:
                if(algarismo(atual))
                {
                    num = atual - '0';
                    est = NUMERO;
                }
                else if(atual == '+')
                {
                    op = SOMA;
                }
                else if(atual == '-')
                {
                    op = SUBTRACAO;
                }
                break;
            case NUMERO:
                if(algarismo(atual))
                {
                    num *= 10;
                    num += atual - '0';
                }
                else
                {
                    if(op == SOMA)
                        total += num;
                    else if(op == SUBTRACAO)
                        total -= num;
                    est = FORA;
                }
                break;
        }
    }
    printf("%d", total);
    return 0;
}