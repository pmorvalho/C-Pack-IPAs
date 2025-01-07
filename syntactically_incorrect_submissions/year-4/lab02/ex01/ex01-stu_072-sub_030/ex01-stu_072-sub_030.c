

#include <stdio.h>

int main() {

    int numeros[3];

    scanf("%d %d %d", &numeros[0], &numeros[1], &numeros[2]);

    int maxNum = 0;
    for (int i = 0; i < 3; i++) {
        if (numeros[i] > maxNum) {
            maxNum = numeros[i];
        }
    }
    printf("%d\n", maxNum);
    return 0;
}