

#include <stdio.h>

#define VECMAX 100

int main() {

    int n, max = 0;
    int i, j;
    int vetor[VECMAX]; 

    scanf("%d",&n);

    for (i=0; (i<n)&&(i<VECMAX); i++) {
        scanf("%d",&vetor[i]);

        if (vetor[i] > max)
            max = vetor[i];
    }

    for (i=0; i<max; i++) {
        for (j=0; (j<n)&&(j<VECMAX); j++)

            if (vetor[j] > max-1-i)
                putchar('*');
            else
                putchar(' ');
        
        putchar('\n');
    }

    return 0;
}
