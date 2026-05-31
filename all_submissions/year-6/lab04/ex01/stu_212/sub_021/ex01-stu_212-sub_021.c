
#include <stdio.h>
#define VECMAX 100
int main() {
    int n, i, j, dig;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        scanf("%d", &dig);
        for (j = 0; j < dig; ++j) {
            printf("*");
        }
    printf("\n");
    }
    return 0; 
}