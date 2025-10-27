
#include <stdio.h>
#include <values.h>
int main() {
    int n;
    scanf("%d",&n);
    float min = FLT_MAX, max = -FLT_MAX,x;
    for (int i = 0; i < N; i++) {
        scanf("%f",x);
        min = (min < x) ? min : x;
        max = (max > x) ? max : x;
    } 
    
    printf("min: %f, max:%f\n", min,max);
return 0;    
}