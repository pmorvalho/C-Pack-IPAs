
#include <stdio.h>

int main(){

    int n;
    double val, min, max;

    if (scanf("%d",&n) != 1 || n <= 0) return 2;
    if (scanf("%lf", &val) != 1) return 2;
    min=max=val;
    while (--n != 0) {
        if (scanf("%lf",&val) != 1) return 2;
        if (min > val) min = val;
        if (max < val) max = val;
    }

    printf("min: %f, max: %f\n",min,max);

    return 0;
}