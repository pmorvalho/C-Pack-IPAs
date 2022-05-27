#include <stdio.h>

#define VECMAX 100

int main() {

    int arr[VECMAX];
    int i, j;
    int n, max = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > max)
            max = arr[i];
    }

    for (i = 0; i < max; i++) {
        for (j = 0; j < n; j++) {
            if (arr[j] < max) {
                arr[j] += 1;
                printf(" ");
            }
            else
                printf("*");
        }
        printf("\n");
    }
    
    return 0;
}