
#include <stdio.h>

#define VECMAX 100

int main() {
    int n, n1, L, max = 0;
    int valores[VECMAX];
    
    scanf("%d", &n);
    
    if (n <= 0 || n >= VECMAX) {
        return 1;
    }
    
    for (n1 = 0; n1 < n; n1++) {
        scanf("%d", &valores[n1]);
        if (valores[n1] > max) {
            max = valores[n1];
        }
    }
    
    for (n1 = 1; n1 <= max; n1++) {
        for (L = 0; L < n; L++) {
            if (n1 <= valores[L]) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}