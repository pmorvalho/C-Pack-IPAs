
#include <stdio.h>
#define DIM 100


int main() {
    int Arr[DIM], n, i, max = -1, j;

    scanf("%d", &n);
    
    for (i = 0; i < n; i++) {
        scanf("%d", &Arr[i]);
        if (max != -1) {
            if (max < Arr[i]) {
                max = Arr[i];
            }
        } else {
            max = Arr[i];
        }
    }
    
    for (i = 0; i < max; i++) {
        for (j = 0; j < n; j++) {
                if (Arr[j] != 0) {
                    printf("*");
                    Arr[j] -= 1;
                } else {
                    printf(" ");
            } 
        }
        printf("\n");
    }
    return 0;
}