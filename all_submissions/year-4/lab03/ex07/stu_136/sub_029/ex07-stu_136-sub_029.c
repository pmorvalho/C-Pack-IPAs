

#include <stdio.h>

#define DENTRO 1
#define FORA 0

int potencia(int base, int exp) {

    int res = 1;

    while (exp-- > 0)
        res *= base;
    
    return res;
}

int main() {

    int n = 0, n_inv = 0, exp = 0, res = 0, estado = FORA;
    char op = '+', c = getchar();

    n_inv += (c - '0') * potencia(10,exp++);

    while (c != '\n' && c != EOF) {

        if (estado == DENTRO) {

            if (c >= '0' && c <= '9')
                n_inv += (c - '0') * potencia(10,exp++);
            else {
                estado = FORA;

                while (n_inv > 0) {
                    n += (n_inv % 10) * potencia(10,--exp); 
                    n_inv /= 10;
                }
            }
        }
        else {

            if (op == '+')
                res += n;
            else
                res -= n;
            
            n = 0;

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

    if (op == '+')
        res += n_inv;
    else
        res -= n_inv;

    printf("%d\n",res);

    return 0;
}