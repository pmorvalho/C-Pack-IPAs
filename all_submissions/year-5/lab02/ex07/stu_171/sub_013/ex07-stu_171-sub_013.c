
#include <stdio.h>

int main() {
    int num, contador, divisores = 0;
    scanf("%d", &num);
    for (contador = 1; contador <= num; contador++) {
        if (num%contador == 0) {
            divisores++;
        }
    }
    printf("%d\n", divisores);
    return 0;
}