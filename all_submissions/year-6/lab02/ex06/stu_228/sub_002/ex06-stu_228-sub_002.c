

#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    double min, max;
    scanf("%lf", &max);
    min = max;
    while (--n != 0) {
        double num;
        scanf("%lf", &num);
        if (num < min) min = num;
        if (num > max) max = num;
    }
    printf("min: %f, max: %f\n", min, max);
    return 0;
}