
#include <stdio.h>

#define VECMAX 100

int main() {

    int n, i, j, k;
     int max = 0;
     int vetor[VECMAX];
     char grafico[VECMAX][VECMAX];

     
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
        if (vetor[i] >= max) {
            max = vetor[i];
        }  
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < max - vetor[i]; j++) {
            grafico[i][j] = ' ';
        }
        for (j = max - vetor[i]; j < max; j++) {
            grafico[i][j] = '*';
        }
    }

    for (j = 0; j < max; j++) {
        for (i = 0; i < n; i++) {
            printf("%c", grafico[i][j]);
        }
        putchar('\n');
    }

    return 0;

}

