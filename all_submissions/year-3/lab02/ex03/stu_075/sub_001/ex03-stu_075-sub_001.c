

#include <stdio.h>

int main() {
    int i, j;
    scanf("%d%d", &i, &j);
    if (i <= 0 || j <= 0) return 1;
    ((i % j) == 0) ? printf("yes\n") : printf("no\n");
    return 0;
}