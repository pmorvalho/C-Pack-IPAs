
#include <stdio.h>
int main() {
    int n;
    float min, max, v;
    scanf("%d", &n);
    scanf("%f", &v);
    min = max = v;
    while(--n) {
        scanf("%f", &v);
        if(v<min)
            min = v;
        if(v>max)
            max = v;
    }
    printf("min: %f, max: %f\n", min, max);
    return 0;
}