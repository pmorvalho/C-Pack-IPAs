#include <stdio.h>

int main() {
    float min, max;
    float k;
    int n, i;

    scanf("%d",&n);
    scanf("%f", &max);
    min = max;

    for(i=1;i<n;++i) {
        scanf("%f", &k);
        if (k>max)
        max = k;
        if (k<min)
        min = k;
    }

    printf("min: %f, max: %f\n", min, max);
    return 0;
}