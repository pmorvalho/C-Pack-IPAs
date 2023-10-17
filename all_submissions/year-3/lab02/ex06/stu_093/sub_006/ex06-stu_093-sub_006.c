
#include <stdio.h>

int main(){

    float max, min, num;
    int i, n;

    scanf("%d%f", &n, &num);
    max = (min = num);

    for(i = 0; i < n - 1; i++){
        scanf("%f", &num);
        if(num > max)
            max = num;
        if(num < min)
            min = num;
    }

    printf("min: %f, max: %f\n", min, max);
    return 0;
}