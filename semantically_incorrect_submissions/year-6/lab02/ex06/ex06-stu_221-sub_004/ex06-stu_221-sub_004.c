
#include <stdio.h>

int main () {
    int n;
    double max, min, val;
    scanf("%d",&n);
    scanf("%lf", &val);
    min = max = val;
    n--;
    while (n > 0) {
        scanf("%lf", &val);
        if (val>max)
            max = val;
        else if(val<min)
            min = val;
    }
    printf("min: %f, max: %f\n", min, max);
    return 0;
}