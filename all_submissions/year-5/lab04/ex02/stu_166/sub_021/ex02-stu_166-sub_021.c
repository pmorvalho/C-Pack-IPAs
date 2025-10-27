

#include <stdio.h>

#define VECMAX 100

int main () {
    int n, v[VECMAX], i = 0, max = 0, j = 0;
    scanf("%d", &n);
    while (i < n) {
        scanf("%d", &v[i]);
        if (v[i] > max)
            max = v[i];
        i++;
    }
    
    while (j < max) {
        i = 0;
        while (i < n) {
            if (v[i] > 0) {
                printf("*");
                v[i]--;
            }
            else if (v[i] == 0)
                printf(" ");
            i++;
        }
        printf("\n");
        j++;
    }
    return 0;
}