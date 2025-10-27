

#include <stdio.h>

int main(){
    int a, i;
    float b=0;
    float max = 0;
    float min = 0;
    scanf("%d", &a);
    for (i=0; i<a; i++){
        scanf("%f", &b);
        if (i==0)
            min=b;
        if(b>max)
            max =b;
        if(b<min)
            min = b;
    }
    printf("min: %f, max: %f\n", min, max);
    return 0;
}