
#include <stdio.h>

#define SUBTRAÇAO 0
#define SOMA 1

char c = 'a';
int num, operaçao = SOMA, resultado = 0;

int main () {
    while (c != '\n') {
        num = 0;
        while ((c = getchar()) != ' ' && c != '\n') {
            if (c >= 48 && c <= 57) 
                num = (num * 10) + (c - 48);
            else if (c == '-') {
                operaçao = SUBTRAÇAO;
            }
            else if (c == '+') {
                operaçao = SOMA;
            }
        }
        if (operaçao == SOMA)
            resultado += num;
        else if ( operaçao == SUBTRAÇAO)
            resultado -= num;
    }
    printf("%d\n", resultado);

    return 0;
}