

#include <stdio.h>

int main(){
    int n, i;
    float x, min, max;


    scanf("%d", &n);
    min=n, max=n;
    for(i = 0; i < n; i++){
        scanf("%f", &x);
        if (i == 0){
            min = x;
            max = x;
        }
        if (x < min)
            min = x;
        if (x > max)
            max = x;
    }

    printf("min: %f, max: %f\n", min, max);
    return 0;
}