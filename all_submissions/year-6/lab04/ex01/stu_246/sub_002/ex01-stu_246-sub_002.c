
#include <stdio.h>
#define VECMAX 100

int main() {
    int n;
    int vec[VECMAX];
    int i;
    int j;
    scanf("%d", &n);
    for (i=0; i<n; i++) {
        scanf("%d", &vec[i]);
    }
    for (i=0; i<n; i++) {
        for (j=1;j<=vec[i]; j++) putchar('*');
        putchar('\n');
    }
    return 0;
}