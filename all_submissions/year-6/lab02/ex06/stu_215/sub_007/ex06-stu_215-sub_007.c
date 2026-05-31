


#include <stdio.h>  
int main(){
    float num,min,max;
    scanf("%f",&num);
    min = num;
    max = num;
    while (scanf("%f", &num) == 1){
        if (num < min)
            min = num;
        if (num > max)
            max = num;
    }
    printf("min: %f, max: %f\n", min, max);
    return 0;
}