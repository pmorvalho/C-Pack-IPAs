
#include <stdio.h>

int main() {
    int num, contador;
    scanf("%d", &num);
    for (contador = 1; contador <= num; contador++) {
        printf("%d\n", contador);
    }
    return 0;
}