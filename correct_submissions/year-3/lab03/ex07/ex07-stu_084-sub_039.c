
#include <stdio.h>

int conc_num(int left, int right) {
    return 10*left + right;
}



enum op{SUM,SUBTRACT};

int calc_op(enum op operador, int a, int b) {
    if (operador == SUM) {
        return a+b;
    } else {
        return a-b;
    }
}

int main() {
    int c, soma = 0, n = 0;
    enum op estado=SUM;
    while ((c = getchar()) != EOF && c != '\n') {
        switch (c) {
            case ' ':
                break;
            case '+':
                soma = calc_op(estado, soma, n);
                n = 0;
                estado = SUM;
                break;
            case '-':
                soma = calc_op(estado, soma, n);
                n = 0;
                estado = SUBTRACT;
                break;
            default:
                n = conc_num(n, c-'0');
        }
    }
    printf("%d\n", calc_op(estado, soma, n));
    return 0;
}