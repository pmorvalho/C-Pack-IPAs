
#include <stdio.h>

int main() {
    int value;
    int contador = 0;

    scanf("%d", &value);

    for(int i = 1; i <= value; i++) {
        if (value % i == 0) {
            contador++;
        }
    }
    printf("%d\n", contador);

    return 0;
}
