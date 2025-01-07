

#include <stdio.h>

#define VECMAX 100

int main() {
    int n, i, row, max = 0, vec[VECMAX];
    scanf("%d", &n);
    for (i = 0; i < n; ++i) {
        scanf("%d", &vec[i]);
        if (vec[i] > max) {
            max = vec[i];
        }
    }
    for (row = max; row > 0; --row) {
        for (i = 0; i < n; ++i) {
            if (vec[i] >= row) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

return 0;
}