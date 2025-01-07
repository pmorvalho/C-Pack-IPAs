

#include <stdio.h>

#define DENTRO 1
#define FORA 0

int potencia(int base, int exp) {

    int res = 1;

    while (exp-- > 0)
        res *= base;
    
    return res;
}

int inverteNumero(int n_inv, int exp) {
    
    int n = 0;

    while (n_inv > 0) {
        n += (n_inv % 10) * potencia(10,--exp); 
        n_inv /= 10;
    }

    return n;
}

int main() {

    int n = 0, n_inv = 0, exp = 0, res = 0, estado = DENTRO;
    char op = '+', c = getchar();

    while (c != '\n' && c != EOF) {

        if (estado == DENTRO) {

            if (c >= '0' && c <= '9')
                n_inv += (c - '0') * potencia(10,exp++);
            else {
                estado = FORA;
                n = inverteNumero(n_inv,exp);
            }
        }
        else {

            if (op == '+') {
                res += n;
                n = n_inv = exp = 0;
            }
            else {
                res -= n;
                n = n_inv = exp = 0;
            }

            if (c == '+')
                op = '+';
            else if (c == '-')
                op = '-';
            else {
                estado = DENTRO;
            }
        }

        c = getchar();
    }

    if (op == '+') {
        n = inverteNumero(n_inv,exp);
        res += n;
    }
    else {
        n = inverteNumero(n_inv,exp);
        res -= n;
    }

    printf("%d\n",res);

    return 0;
}