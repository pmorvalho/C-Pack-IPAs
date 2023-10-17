

#include <stdio.h>

enum operacao{SOMA, SUBTRACAO};

int numero(int a, int b) {
    return a * 10 + b;
}

int calculadora(enum operacao op, int a, int b) {
    if (op == SOMA)
        return a + b;
    else
        return a - b;
}

int main() {
    enum operacao op = SOMA;
    int c, num = 0, res = 0;
    while ((c = getchar()) != EOF && c != '\n') {
        switch (c) {
            case ' ':
                break;
            case '+':
                res = calculadora(op, res, num);
                num = 0; 
                op = SOMA; 
                break;
            case '-': 
                res = calculadora(op, res, num);
                num = 0;
                op = SUBTRACAO;
                break;
            default:
                num = numero(num, c - '0');
        }
    }
    printf("%d\n", calculadora(op, res, num));

    return 0;
}