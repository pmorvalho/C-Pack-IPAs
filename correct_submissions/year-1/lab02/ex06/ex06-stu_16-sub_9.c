#include <stdio.h>

int main(){
    float min, max, num;
    int n;
    scanf("%d", &n);
    min = n;
    max = n;

    while(n>0){
        scanf("%f", &num);
        if(min > num)
            min = num;
        else if(max < num)
            max = num;
        n--;
    }

    printf("min: %f, max: %f\n", min, max);
    return 0;
}