

#include <stdio.h>
#include <values.h>

int main() {
    int n, i;
    scanf("%d", &n);
    float min = FLT_MAX, max = -FLT_MAX, x;

    for(i = 0; i < n; i++) {
        scanf("%f", x);
        min = (min < x) ? min : x;
        max = (max > x) ? max : x;
    }
    print("min: %f\nmax: %f\n", min, max);
    return 0;
}