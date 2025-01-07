
#include <stdio.h>

int main() {
    int n, soma = 0, estado = 1, num = 0;
    char op;

    while ((n = getchar()) != '\n') {
        if (n == ' ') {
            estado = 0;
            if (op == '-') num *= -1;
            soma += num;
            num = 0;
        }
        if ((48 < n) && (n < 58)) estado = 1;
        if (estado) {
            num *= 10;
            num += n - 48;
        }
        if ((n == '+') || (n == '-')) op = n;
    }

    if (op == '-') num *= -1;

    soma += num;
    printf("%d\n", soma);
    return 0;
}