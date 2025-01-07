

#include <stdio.h>

#define VECMAX 100

int main() {
    int n, i, j, vec[VECMAX];
    scanf("%d", &n);
    for (i = 0; i < n; ++i) {
        scanf("%d", &vec[i]);
    }
    for (i = 0; i <n; ++i) {
        for (j = vec[i]; j > 0; --j) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}