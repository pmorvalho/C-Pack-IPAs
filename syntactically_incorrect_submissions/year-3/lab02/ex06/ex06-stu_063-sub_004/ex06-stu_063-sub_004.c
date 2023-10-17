

#include <stdio.h>

int main(){
    int n;
    float f, min, max;
    scanf("%d", &n);
    scanf("%f", &f);
    max = min = f;
    while (n>1){
        n--;
        scanf("%d", &f);
        if (f > max)
            max = f;
        else if (f < min)
            min = f;
    }
    printf("min: %f, max: %f\n", min, max);
    return 0;
}