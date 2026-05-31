
#include <stdio.h>
#define VECMAX 100

int max(int vec[], int n) {
    int max = vec[0];

    for (int i = 1; i < n; i++) {
        if (vec[i] > max) {
            max = vec[i];
        }
    }

    return max;
}


int main() {
    int vec[VECMAX];
    int max_value;
    int i, n;

    scanf("%d", &n);

    if (n >= VECMAX) {
        return 1;
    }

    for (i = 0; i < n; i++) {
        scanf("%d", &vec[i]);
    }

    max_value = max(vec, n);

    for (int line = 1; line <= max_value; line++) {
        for (i = 0; i < n; i++) {
            if (vec[i] >= line) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        
        printf("\n");
    }

    return 0;
}