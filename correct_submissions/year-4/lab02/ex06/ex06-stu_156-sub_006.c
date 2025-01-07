
#include <stdio.h>

int main(void){
    int n;
    float min, max,num;
    scanf("%d",&n);
    scanf("%f",&num);
        min = num;
        max = num;
        n--;
    while(n--){
        scanf("%f",&num);
        if(num < min){
        min = num;
        }
        if(num > max){
        max = num;
        }
    }
    printf("min: %f, max: %f\n", min, max);
    return 0;
}