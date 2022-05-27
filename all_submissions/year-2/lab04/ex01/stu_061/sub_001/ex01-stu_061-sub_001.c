#include <stdio.h>

#define VECMAX 100

int main()
{
    int n, i, j, arr[VECMAX];

    printf("Insira um número: ");
    scanf("%d", &n);

    for (j = 0; j < n; j++) {
        printf("Insira o %dº número: ", j+1);
        scanf("%d", &arr[j]);
    }

    for (j = 0; j <= n; j++) {
        for (i = 0; i < arr[j]; i++)
            printf("*");
        printf("\n");
    }

    return 0;
}