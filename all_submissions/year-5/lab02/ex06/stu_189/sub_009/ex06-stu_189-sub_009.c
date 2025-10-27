
#include <stdio.h>
int main(){
    int n;
    float x, max, min;
    scanf("%d",&n);
    scanf("%f",&x);
    max = min = x;
    n--;
    while (n--){
        scanf("%f",&x);
        if (x>max) max = x;
        if (x<min) min = x;
    }
    printf("min: %f, max: %f\n", min, max);
    return 0;
}