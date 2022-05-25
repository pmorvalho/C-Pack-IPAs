#include <stdio.h>

#define VECMAX 100

int main()
{
    int i, j, n, max = 0, arr[VECMAX];

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > max) 
            max = arr[i];
    }

    for (i = 0; i < max; i++) {
        for (j = 0; j < n; j++) {
            if (arr[j] > 0) {
                printf("*");
                arr[j] -= 1;
            }
            else
                printf(" ");
        }
        printf("\n");
    }   

    return 0;
}
