

#include <stdio.h>

int main() {
    int N, i;
    double num, min_val, max_val;
    scanf("%d", &N);
    if (N <= 0) return 0;
    scanf("%lf", &num);
    min_val = max_val = num;
    for (i = 1; i < N; i++) {
        scanf("%lf", &num);
        if (num < min_val) min_val = num;
        if (num > max_val) max_val = num;
    }
    printf("min: %f, max: %f\n", min_val, max_val);
    return 0;
}