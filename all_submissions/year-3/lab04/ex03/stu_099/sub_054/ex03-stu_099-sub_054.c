
#include <stdio.h>

#define VECMAX 100
int main()
{
    int vetor[VECMAX], max, i, n;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &vetor[i]);
        if (vetor[i] > max)
            max = vetor[i];
    }

    while (max > 0) {
        for (i = 0; i < n; i++){
            if (vetor[i] == max) {
                printf("*");
                vetor[i]--;
            } else
                printf(" ");
        }
        printf("\n");
        max--;
    }
    
    return 0;
}