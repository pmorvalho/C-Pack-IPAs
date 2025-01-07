

#include <stdio.h>

#define ASCII_ZERO 48

int number(int c) { return '0' <= c && c <= '9'; }

enum state {FORA, DENTRO};

int main() {
    int current, n = 0, conta = 0, operador = '+';
    enum state st = FORA;
    while ((current = getchar()) != '\n') {
        switch (st)
        {
        case FORA:
            if (number(current)) {
                n = current - ASCII_ZERO;
                st = DENTRO;
            } else if(current == '+')
                operador = '+';
            else if(current == '-')
                operador = '-';
            break;
        
        case DENTRO:
            if (number(current)) {
                n = n * 10 + (current - ASCII_ZERO);
            } else {
                if (operador == '+') { conta += n; } else { conta -= n; }
                st = FORA;
            }
            break;
        }
    }
    if (operador == '+') { conta += n; } else { conta -= n; }
    printf("%d\n", conta);
    return 0;
}