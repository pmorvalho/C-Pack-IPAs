
#include <stdio.h>
#define VECMAX 100

int main() {
    int n, i, a[VECMAX], Max = 0;
    scanf("%d", &n);
    

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (a[i] > Max) {
            Max = a[i];
        }
    }
    for (int j = 1; j <= Max; j++) {
        for (i = 0; i < n; i++) {
        if( a[i] >= j) {
            printf("*");
        }
        else {
            printf(" ");
        }
       
            }
        putchar('\n');

}
        

    return 0;
    }

