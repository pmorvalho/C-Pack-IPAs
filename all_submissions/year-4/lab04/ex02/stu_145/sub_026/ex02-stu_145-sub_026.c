

#include <stdio.h>

#define VECMAX 100

int main() {
    int n, i, row = 1, max = 0, vec[VECMAX];
    scanf("%d", &n);
    for (i = 0; i < n; ++i) {
        scanf("%d", &vec[i]);
        if (vec[i] > max) {
            max = vec[i];
        }
    }
    while (row <= max) {
        for (i = 0; i < n; ++i) {
            if (vec[i] >= row) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
        ++row;
    }
    return 0;
}