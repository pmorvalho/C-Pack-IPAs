
#include <stdio.h>
#define VECMAX 100

int main() {
    int n;
    scanf("%d", &n);
    int numeros[n];
    for (int i = 0; i < n; i ++){
        scanf("%d", &numeros[i]);
    }
    while (1) {
        for (int i = 0; i < n; i++) {
            if (numeros[i] > 0) {
                printf("*");
                numeros[i]--;
            } else {
                printf(" ");
            }
        }
    int c = 0;
    for (int i = 0; i < n; i++) {
        if (numeros[i] == 0)
            c++;
        }
    if (c == n) {
        printf("\n");
        return 0;
        }
    printf("\n");
    }
}