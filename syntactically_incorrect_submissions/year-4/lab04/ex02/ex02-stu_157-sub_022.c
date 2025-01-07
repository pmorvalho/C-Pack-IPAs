
#include <stdio.h>

#define VECMAX 100

#include <stdio.h>

void estrelas_vert(int numeros[], int length) {
    int sum = 0;
    for (int j = 0; j < length; j++) {
        sum += numeros[j];
    }
    if (sum > 0) {
        int i;
        for (i = 0; i < length; i++) {
            if (numeros[i] > 0) {
                printf("*");
                numeros[i]--;
            }
            else 
                printf(" ");
        }
        printf("\n");
        estrelas_vert(numeros, length); 
    }
}



int main(void) {
    int n;
    scanf("%d", &n);
    int numeros[VECMAX];
    int i;
    for (i = 0; i < n; i++) {
        int temporario;
        scanf("%d", &temporario);
        numeros[i] = temporario;
    }

    estrelas_vert(numeros, n);
    return 0;
}