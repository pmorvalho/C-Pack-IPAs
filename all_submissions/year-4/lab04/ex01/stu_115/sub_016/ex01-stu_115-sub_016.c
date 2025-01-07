
#include <stdio.h>

int main() {
    int Arr_int[100], n, i, j;

    scanf("%d", &n);

    for (i = 0; n > i; i++) {
        scanf("%d", &Arr_int[i]);
    }   
    for (i = 0; n > i; i++) {
        for (j = 0; Arr_int[i] > j; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}