
#include <stdio.h>

int main() {
    int N;
    double numero, min, max;

    scanf("%d", &N); 
    scanf("%lf", &numero);
    min = max = numero;
    for (int i = 2; i <= N; i++) {
        scanf("%lf", &numero);
        if (numero < min) {
            min = numero;
        }
        if(numero > max){
            max = numero;
        }
    }
    printf("min: %f, max: %f\n", min, max);
    return 0; 
}
