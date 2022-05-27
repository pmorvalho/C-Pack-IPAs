#include <stdio.h>



int main() {
    int N, contador, divisores;
    divisores = 0;

    scanf("%d", &N);
    for (contador = 1; contador <= N; contador++) {
        if ((N % contador) == 0) {
            divisores++;
        }
    }
    printf("%d\n", divisores);
    return 0;
}