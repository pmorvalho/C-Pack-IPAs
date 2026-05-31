

#include <stdio.h>

int main(){

    int n;
    double val, min, max;
    if (scanf("%d", &n)!=1 || n<=0) return 2;
    scanf("%lf", &max);
    min = max;
    while(--n !=0){
        scanf("%lf", &val);
        if (val > max){
            max = val;
        }
        if (val < min){
            min = val;
        }
    }
    printf("min: %f, max: %f\n", min, max);
    return 0;
}