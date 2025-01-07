

#include <stdio.h>
#include <float.h>

float greater(float n1, float n2){
    return (n1 > n2) ? n1: n2;
}
float smaller(float n1, float n2){
    return (n1 < n2) ? n1: n2;
}

int main() {

    int n;
    float min = FLT_MAX, max = -FLT_MAX, curr;
    scanf("%d",&n);

    while(n--){
        scanf("%f",&curr);
        min = smaller(min, curr);
        max = greater(max, curr);
    }
    printf("min: %f, max: %f",min,max);
    return 0;
}