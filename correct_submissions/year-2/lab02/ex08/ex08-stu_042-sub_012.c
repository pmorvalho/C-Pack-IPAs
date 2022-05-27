#include <stdio.h>

int main() {
    
    int n;
    float dig, contador = 0, soma = 0, res;
    
    scanf("%d", &n);

    while (contador++ < n) {
        scanf("%f", &dig);
        soma += dig;
    }
    res = soma / n;

    printf("%.2f\n", res);

    return 0;
}