

#include <stdio.h>

int main() {
    int i, j, k;
    scanf("%d%d%d", &i, &j, &k);
    if (i > j && i > k) {
        printf("%d\n", i);
        return 0;
    }
    (j > k) ? printf("%d\n", j) : printf("%d\n", k);
    return 0;
}