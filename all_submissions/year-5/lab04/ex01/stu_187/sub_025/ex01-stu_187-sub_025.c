

#include <stdio.h>

#define VECMAX 100

int main() {
    int n, i, vec[VECMAX], a, b;

    scanf("%d", &n);
    for (i=0; i < n; i++)
        scanf("%d", &vec[i]);
    for(a=0; a < n; a++) {
        for (b = 0; b < vec[a]; b++)
            printf("*");
        printf("\n");
    }
    return 0;
}




