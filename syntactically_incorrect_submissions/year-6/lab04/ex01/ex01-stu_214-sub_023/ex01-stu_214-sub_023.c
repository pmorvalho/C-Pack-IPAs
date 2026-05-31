
#include <stdio.h>

#define VECMAX 100

int main() {
    int n, i, j, vec[100];
    scanf("%d", &n);

    if (n >= VECMAX) {
        printf("Erro: n tem que ser menor que 100");
    } 
    else {
        for (i = 0; i < n; i++) {
            scanf("%d", &vec[i]);
        }
        for (i = 0; i < n; i++) {

            for (j = 0; j < vec[i]; j++) {
                printf("*");
            }
            printf("\n");
        } 
        
        return 0;
    }
} 