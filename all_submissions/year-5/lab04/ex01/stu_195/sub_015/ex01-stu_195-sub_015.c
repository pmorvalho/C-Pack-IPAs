
#include <stdio.h>
#define VECMAX 100

int main() {
    int v[VECMAX], n, i, d, f;
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        scanf("%d", &d);
        v[i] = d;
    }
    for (i = 0; i < n; i++){
        for (f = 0; f < v[i]; f++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}