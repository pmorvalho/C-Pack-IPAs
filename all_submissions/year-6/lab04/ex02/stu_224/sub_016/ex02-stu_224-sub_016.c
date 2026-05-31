
#include <stdio.h>
#define VECMAX 100

int main() {
    int n, i, j, max = 0;
    int v[VECMAX];
    scanf("%d", &n);

    while(n <= 0 || n > VECMAX) 
        scanf("%d", &n);

    for (i = 0; i < n; i++) { 
        scanf("%d", &v[i]);
        if (v[i] > max)
            max = v[i];
    }   

    for (i = 1; i <= max; i++) { 
        for (j = 0; j <= n - 1; j++) { 
            if (v[j] >= i) 
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}