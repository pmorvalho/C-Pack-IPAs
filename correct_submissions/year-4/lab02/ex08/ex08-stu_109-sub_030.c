
#include <stdio.h>

int main() {
    int N, i = 1;
    float res, numero, acumulador = 0;

    scanf("%d", &N);
    while(i <= N){
        scanf("%f", &numero);
        acumulador += numero;
        i ++;
    }
    res = acumulador/N;
    printf("%.2f\n", res);
    return 0;
}