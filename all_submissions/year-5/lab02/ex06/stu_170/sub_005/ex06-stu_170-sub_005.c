
#include <stdio.h>
#include <float.h>

int main(){
    int n;
    float x, min = FLT_MAX, max = -FLT_MAX;
    scanf("%d", &n);
    while (n--){
        scanf("%f", &x);
        if (x<min) min=x;
        if (x>max) max=x;
    }
    printf("min: %f, max: %f\n", min, max);
    return 0;
}