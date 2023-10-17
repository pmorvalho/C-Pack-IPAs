
#include <stdio.h>

#define VECMAX 100

int main() {

     int n, i, j, k;
     int vetor[VECMAX];

     scanf("%d", &n);

     if (n > VECMAX) {
        return 0;
     }

     for (i = 0; i < n; i++) {
        scanf("%d", &k);
        if (k > 0) {
            vetor[i] = k;
        }
     }

    for (i = 0; i < n; i++) {
        if (vetor[i] > 0) {
            for (j = 1; j <= vetor[i]; j++) {
                putchar('*');
            }  
        }
        putchar('\n');
     }

    return 0;

}
