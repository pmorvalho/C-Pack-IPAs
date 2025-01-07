
#include <stdio.h>

int converte(char c){
    int num;
    num = c;
    return num - 48;
}

int main(){
    char c, operador  = ' ';
    int soma;

    c = getchar();
    soma = converte(c);

    while ((c = getchar()) != '\n'){
        if (c >= '0' && c <= '9'){
            if (operador == '+'){
                soma += c;
                operador = ' ';
            }
            else if(operador == '-'){
                soma -= c;
                operador = ' ';
            }
        }
        else if (c == '+' || c == '-'){
            operador = c;
        }
    }

    printf("%d\n",soma);

    return 0;
}