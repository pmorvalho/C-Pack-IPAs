
#include <stdio.h>
#define VECMAX 100

int main() {
    int n, i, j, val;
    scanf("%d", &n);

    while(n <= 0 || n > VECMAX)
        scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &val);
        for (j = 1; j <= val; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}