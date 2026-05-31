
#include <stdio.h>
#define VECMAX 100

int main() {
    int vec[VECMAX];
    int i, n;

    scanf("%d", &n);

    if (n >= VECMAX) {
        return 1;
    }

    for (i = 0; i < n; i++) {
        scanf("%d", &vec[i]);
    }

    for (i = 0; i < n; i++) {
        for (int j = vec[i]; j > 0; j--) {
            printf("*");
        }        
        
        printf("\n");
    }

    return 0;
}