
#include <stdio.h>
#define VECMAX 100

int main() {
    int n, i, a[VECMAX];

    
    scanf("%d", &n);

    
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    
    for (i = 0; i < n; i++) {
        for (int j = 0; j < a[i]; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
