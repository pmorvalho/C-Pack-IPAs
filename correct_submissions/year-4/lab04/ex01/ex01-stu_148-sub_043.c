
#include <stdio.h>

int main () {
    int n, i, contador, num;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &num);
        contador = 0;
        while (contador++ < num) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}