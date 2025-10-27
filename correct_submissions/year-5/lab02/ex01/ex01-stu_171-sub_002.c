
#include <stdio.h>

int main() {
    int num, nummax, contador = 1;
    scanf("%d", &num);
    nummax = num;
    while (contador < 3) {
        contador++;
        scanf("%d", &num);
        if (num > nummax) {
            nummax = num;
        }

    }
    printf("%d\n", nummax);
    return 0;
}