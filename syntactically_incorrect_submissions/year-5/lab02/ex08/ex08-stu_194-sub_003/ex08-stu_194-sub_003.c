

#include <stdio.h>

int main() {
    int n, i;
    float val, total = 0;

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%f", &val);
        total += val / n;
    }

    printf("%d", total);

    return 0;
}