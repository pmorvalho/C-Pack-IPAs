
#include <stdio.h>

int main () {
    float max, min, lim, another;
    scanf("%f", &lim);
    min = lim;
    max = lim;

    while (another != lim){
        scanf("%f", &another);
        if (another > max)
        max = another;
        if (another < min)
        min = another;
    }
    printf("min: %f, max: %f\n", min, max);
    return 0;
    
}