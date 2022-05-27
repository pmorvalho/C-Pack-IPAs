
#include <stdio.h>
#include <stdlib.h>

void operacao(char sinal,int *result, int num)
{
    if (sinal == '-')
        *result -= num;
    else if (sinal == '+')
        *result += num;
}

int main ()
{
    char c, sinal = '+';
    int num=0, result=0;

    while ((c = getchar()) != '\n'){
        
        if (c == '+' || c == '-'){
            sinal = c;
            c = getchar();
        }
        else{
            if (c >= '0' && c <= '9')
                num = num*10 + c - 48;
            else if (sinal != ' '){
                operacao(sinal, &result, num);
                sinal = ' ';
                num=0;
            }
        }
    }
    operacao(sinal, &result, num);

    printf("%d\n", result);
    
    return 0;
}
