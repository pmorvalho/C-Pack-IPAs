

#include <stdio.h>

int main() {
    int i, j;
    scanf("%d%d", &i, &j);
    (j > i) ? printf("%d\n%d\n", i, j) : printf("%d\n%d\n", j, i);
    return 0;
}