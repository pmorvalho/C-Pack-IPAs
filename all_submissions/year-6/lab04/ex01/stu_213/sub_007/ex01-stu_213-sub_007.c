
#include <stdio.h>
#define VECMAX 100

int main() {
    int i, vec[VECMAX], n, j;

    scanf("%d", &n);
    
    for (i = 0; i < n; i++) {
        scanf("%d", &vec[i]);
    }
    
    for (i = 0; i < n; i++) {
        for (j = 0; j < vec[i]; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}