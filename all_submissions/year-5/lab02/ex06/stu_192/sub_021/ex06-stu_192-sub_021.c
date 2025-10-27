
#include <stdio.h>

int main() {
    int n;
    float m, min, max = 0;
    scanf("%d/n", n);
    while(n>0) {
        scanf("%f/n", m);
        if (m > max)
            max = m;
        if (m < min)
            min = m;
        --n;
    }
    printf("min: %f, max: %f/n", min, max);
    return 0;
}