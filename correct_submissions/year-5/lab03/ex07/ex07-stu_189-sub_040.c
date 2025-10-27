

#include <stdio.h>

int main() {
    int num = 0, resposta = 0;
    char operador = '+';
    char ch;
    
    while ((ch = getchar()) != '\n' && ch != EOF) {
        if (ch >= '0' && ch <= '9') {
            num = num * 10 + (ch - '0');
        } else if (ch == '+' || ch == '-') {
            if (operador == '+') {
                resposta += num;
            } else if (operador == '-') {
                resposta -= num;
            }
            operador = ch;
            num = 0;
        }
    }
    
    if (operador == '+') {
        resposta += num;
    } else if (operador == '-') {
        resposta -= num;
    }
    
    printf("%d\n", resposta);
    
    return 0;
}