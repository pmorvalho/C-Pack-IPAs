
#include <stdio.h>
#define VECMAX 100
int main () {
    int n, i, a[VECMAX];
    char x = '*';
    scanf ("%d", &n);
    for (i = 0; i <= n; i++) {
        scanf ("%d", &a[i]);
        for (int j = 0; j < i; j++) {
            printf("%c", x);
        }
        printf("\n");

    }
return 0;
}