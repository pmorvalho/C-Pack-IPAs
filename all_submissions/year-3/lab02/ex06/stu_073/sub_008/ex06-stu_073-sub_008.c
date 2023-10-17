
#include <stdio.h>

int main () {
    float min, max, another;
    int lim;
    scanf("%d", &lim);
    scanf("%f", &another);
    min = another;
    max = another;

    while (lim != 1){
        scanf("%f", &another);
        if (another > max)
        max = another;
        if (another < min)
        min = another;
        lim--;
    }
    printf("min: %f, max: %f\n", min, max);
    return 0;
    
}