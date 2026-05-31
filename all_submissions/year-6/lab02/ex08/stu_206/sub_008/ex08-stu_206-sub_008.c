

#include <stdio.h>

int main() {
    int n, i;
    float valor, soma = 0, res;
    if (scanf("%d", &n) != 1 || n<= 0) return 0;
    i = 0;
    while (i < n) {
        scanf("%f", &valor);
        soma += valor;
        i++;
    }
    res = soma / n;
    printf("%.2f\n", res);
    return 0;
}