
#include <stdio.h>

int main () {
    int n, counter;
    float v, max, min;
    scanf("%d", &n);

    scanf("%f", &v);
    max = min = v;
    for(counter = 1; counter<n; ++counter){
        scanf("%f", &v);
        if (v>=max)
            max = v;
        if (v<=min)
            min = v;
    }

    printf("min: %f, max: %f\n", min, max);
    return 0;

}