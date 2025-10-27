

#include <stdio.h>
#define VECMAX 100

int main() {
    int n, i, j, max = 0;
    int values[VECMAX];


    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &values[i]);
        if (values[i] > max) {
            max = values[i];
        }
    }

    for (i = 0; i < max; i++) {
        for (j = 0; j < n; j++) {
            if (values[j] >= max - i) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}