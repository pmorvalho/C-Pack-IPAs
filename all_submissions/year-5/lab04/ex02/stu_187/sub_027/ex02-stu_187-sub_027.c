

#include <stdio.h>

#define VECMAX 100

int main() {
    int n, i, vec[VECMAX], a, b, maior = 0;

    scanf("%d", &n);
    for (i=0; i<n; i++) {
        scanf("%d", &vec[i]);
        if (vec[i] > maior)
            maior = vec[i];
    }
    for(a = 0; a < maior; a++) {
        for(b = 0; b < n; b++) {
            if (vec[b] > 0)
                printf("*");
            else
                printf(" ");
            vec[b] = vec[b] - 1;
        }
        printf("\n");
    }
    return 0;
}
