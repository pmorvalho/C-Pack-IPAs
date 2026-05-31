
#include <stdio.h>

int main() {
    int value2, value3;
    int maior;

    scanf("%d %d %d", &maior, &value2, &value3);

    if (value2 > maior) {
        maior = value2;
    }
    if (value3 > maior) {
        maior = value3;
    }

    printf("%d\n", maior);

    return 0;
}