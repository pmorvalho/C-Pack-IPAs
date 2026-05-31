

#include <stdio.h>
 int main() {
    int n, i;
    float val, sum = 0.0;
    if (scanf("%d", &n) != 1 || n <= 0) return 1;
    for (i = 0; i < n; i++) {
        if (scanf("%f", &val) != 1) return 2;
        sum += val;
    }
    float media = sum / n;
    printf("%.2f\n", media);
    return 0;
 }